//
//  AdmobBannerAdsManager.m
//  UnityFramework
//
//  Created by Admin on 28/05/2024.
//

#import "AdmobBannerAdsManager.h"

@implementation AdmobBannerAdsManager{
    /// The  ad view.
    GADBannerView *bannerView;
    
    NSString* adUnitId;
    NSString* bannerPosition;
    
    BOOL isLoadingAds;
    
}

+ (nonnull AdmobBannerAdsManager *)sharedInstance {
    
    static AdmobBannerAdsManager *instance = nil;
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        instance = [[AdmobBannerAdsManager alloc] init];
    });
    
    return instance;
}

-(id) init{
    self = [super init];
    if(self){
        NSString *filePath = [[NSBundle mainBundle] pathForResource:@"Info" ofType:@"plist"];
        NSDictionary* infoData = [NSDictionary dictionaryWithContentsOfFile:filePath];
        self->adUnitId = [infoData  objectForKey:@"AdmobBannerId"];
        self->bannerPosition = [infoData  objectForKey:@"ALBannerPosition"];
    }
    return self;
}


- (void)showBanner {
    if(self->bannerView == nil){
        [self createBanner];
        return;
    }
    
    if(self->bannerView != nil)
        [self->bannerView setHidden:NO];
    
}

- (void)hideBanner {
    if(self->bannerView != nil)
        [self->bannerView setHidden:YES];
}

- (void) createBanner{
    UIViewController * mainView = [self unityViewController];
    // Here safe area is taken into account, hence the view frame is used after the
    // view has been laid out.
    CGRect frame = UIEdgeInsetsInsetRect(mainView.view.frame, mainView.view.safeAreaInsets);
    CGFloat viewWidth = frame.size.width;
    
    // Here the current interface orientation is used. If the ad is being preloaded
    // for a future orientation change or different orientation, the function for the
    // relevant orientation should be used.
    GADAdSize adaptiveSize = GADCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(viewWidth);
    // In this case, we instantiate the banner with desired ad size.
    self->bannerView = [[GADBannerView alloc] initWithAdSize:adaptiveSize];
    
    // Replace this ad unit ID with your own ad unit ID.
    self->bannerView.adUnitID = self->adUnitId;
    self->bannerView.rootViewController = [self unityViewController];
    self->bannerView.delegate = self;
    
    /// Record  Banner Revenue
    __weak AdmobBannerAdsManager *weakSelf = self;
    self->bannerView.paidEventHandler = ^(GADAdValue * _Nonnull value) {
        NSDecimalNumber *reveneValue = value.value;
        
        NSString *currencyCode = value.currencyCode;
        GADAdValuePrecision precision = value.precision;
        
        AdmobBannerAdsManager *strongSelf = weakSelf;
        GADAdNetworkResponseInfo *loadedAdNetworkResponseInfo =
        strongSelf->bannerView.responseInfo.loadedAdNetworkResponseInfo;
        
        NSString *adSourceName = loadedAdNetworkResponseInfo.adSourceName;
        NSString *adSourceID = loadedAdNetworkResponseInfo.adSourceID;
        NSString *adSourceInstanceName = loadedAdNetworkResponseInfo.adSourceInstanceName;
        
        if (strongSelf->_delegate != nil) {
            NSLog(@"Admob Banner: paidEventHandler -> %@ %f",adSourceName, [reveneValue floatValue]);
    
            [strongSelf->_delegate admobBannerAdRevenue:adSourceName adUnitId:strongSelf->adUnitId adValue:[reveneValue floatValue]];
        }
    };
    [self hideBanner];
    [self addBannerViewToView:self->bannerView];
    
    isLoadingAds = NO;
    [self requestBanner:NO];
}

-(void) requestBanner:(BOOL)isForceRequest{
    if(self->bannerView == nil){
        [self createBanner];
        return;
    }
    
    if(self->isLoadingAds && !isForceRequest)
        return;
    
    self->isLoadingAds = YES;
    NSLog(@"Admob requestBanner");
    GADRequest *request = [GADRequest request];
    // Create an extra parameter that aligns the banner
    GADExtras *extras = [[GADExtras alloc] init];
    extras.additionalParameters = @{@"collapsible" : [self->bannerPosition isEqual: @"bottom_center"] ? @"bottom" : @"top" };
    [request registerAdNetworkExtras:extras];
    
    [self->bannerView loadRequest:[GADRequest request]];
}

- (void)addBannerViewToView:(UIView *)bannerView {
    UIViewController * mainView = [self unityViewController];
    bannerView.translatesAutoresizingMaskIntoConstraints = NO;
    [mainView.view addSubview:bannerView];
    
    [mainView.view addConstraints:@[
        [NSLayoutConstraint constraintWithItem:bannerView
                                     attribute:[self->bannerPosition isEqual: @"bottom_center"] ? NSLayoutAttributeBottom : NSLayoutAttributeTop
                                     relatedBy:NSLayoutRelationEqual
                                        toItem:mainView.view.safeAreaLayoutGuide
                                     attribute:[self->bannerPosition isEqual: @"bottom_center"] ? NSLayoutAttributeBottom : NSLayoutAttributeTop
                                    multiplier:1
                                      constant:0],
        
        [NSLayoutConstraint constraintWithItem:bannerView
                                     attribute:NSLayoutAttributeCenterX
                                     relatedBy:NSLayoutRelationEqual
                                        toItem:mainView.view
                                     attribute:NSLayoutAttributeCenterX
                                    multiplier:1
                                      constant:0]
    ]];
}

- (UIWindow *) keyWindow
{
    NSArray<UIWindow *> *windows = [[UIApplication sharedApplication] windows];
    for (UIWindow *window in windows) {
        if (window.isKeyWindow) {
            return window;
        }
    }
    return nil;
}

- (UIViewController *)unityViewController
{
    // Handle edge case where `UnityGetGLViewController()` returns nil
    UIWindow * keyWin = [self keyWindow];
    return UnityGetGLViewController() ?: UnityGetMainWindow().rootViewController ?: [keyWin rootViewController];
}

#pragma mark GADBannerViewDelegate implementation

- (void)bannerViewDidReceiveAd:(GADBannerView *)bannerView {
    NSLog(@"bannerViewDidReceiveAd");
    if (self->_delegate != nil) {
        [self->_delegate admobBannerAdLoaded];
    }
}

- (void)bannerView:(GADBannerView *)bannerView didFailToReceiveAdWithError:(NSError *)error {
    NSLog(@"bannerView:didFailToReceiveAdWithError: %@", [error localizedDescription]);
}

- (void)bannerViewDidRecordImpression:(GADBannerView *)bannerView {
    NSLog(@"bannerViewDidRecordImpression");
}

- (void)bannerViewDidRecordClick:(GADBannerView *)bannerView {
    NSLog(@"bannerViewDidRecordClick");
    if (self->_delegate != nil) {
        [self->_delegate admobBannerAdClicked];
    }
}

- (void)bannerViewWillPresentScreen:(GADBannerView *)bannerView {
    NSLog(@"bannerViewWillPresentScreen");
}

- (void)bannerViewWillDismissScreen:(GADBannerView *)bannerView {
    NSLog(@"bannerViewWillDismissScreen");
}

- (void)bannerViewDidDismissScreen:(GADBannerView *)bannerView {
    NSLog(@"bannerViewDidDismissScreen");
}

@end
