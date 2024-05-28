#import "rofisdk.h"
#import "DevicesFeatures.h"

// Converts NSString to C style string by way of copy (Mono will free it)
#define MakeStringCopy( _x_ ) ( _x_ != NULL && [_x_ isKindOfClass:[NSString class]] ) ? strdup( [_x_ UTF8String] ) : NULL

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

#ifdef __cplusplus
extern "C" {
#endif
    void UnityPause(int pause);
    extern void UnitySendMessage( const char *className, const char *methodName, const char *param );
    
#ifdef __cplusplus
}
#endif

@interface rofisdk()
@property (nonatomic, assign) NSInteger totalInterAdsHasShown;
@end

@implementation rofisdk
char *const SDK_OBJECT_NAME = "RofiSdkHelper";

+ (rofisdk *) sharedObject {
    static rofisdk *sharedClass = nil;
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        sharedClass = [[self alloc] init];
    });
    
    return sharedClass;
}

- (instancetype)init{
    if(self = [super init]){
        consentCode = -1;
    }
    return self;
}

- (void) warmUp{
    
    if(_isWarmUped) return;
    isAATFlowFinished = false;
    
    isRemoteConfigFetched = false;
    
    [self loadLocalCache];
    
    [self initFirebaseService];
    
    delayStartTimer = [NSTimer scheduledTimerWithTimeInterval:1.0
                                                       target:self
                                                     selector:@selector(onTick)
                                                     userInfo: nil repeats:YES];
    
    _isWarmUped = YES;
}

-(void)requestATT{
    NSLog(@"XXX requestATT");
    __weak __typeof__(self) weakSelf = self;
    
    [[DevicesFeatures sharedObject] requestATT:^(BOOL granted) {
        NSLog(@"XXX AAT Finish");
        __strong __typeof__(self) strongSelf = weakSelf;
        
        if (!strongSelf) {
            return;
        }
        [[DevicesFeatures sharedObject] requestNotification:^(BOOL granted) {
            isAATFlowFinished =  true;
        }];
    }];
}

-(void) startTick{
    
}

-(void)onTick{
    NSLog(@"XXX onTick");
    
    int internetStatus = [[DevicesFeatures sharedObject] internetStatus];
    
    currentTick += 1;
    if(internetStatus == 0) return;
    
    if(!isRunConsentFlow && currentTick >= 3){
        [self runConsentFlow];
    }
    
    if(!isRunConsentFlow && internetStatus != 0){
        [self runConsentFlow];
    }
}

-(void)stopTimeTick{
    if(delayStartTimer) {
        [delayStartTimer invalidate];
        delayStartTimer = nil;
    }
}

- (void) runConsentFlow{
    isRunConsentFlow = true;
    
    if(![[DevicesFeatures sharedObject] isOnline]){
        NSLog(@"XXX runConsentFlow 1");
        
        [GoogleMobileAdsConsentManager.sharedInstance byPassConsentForm];
        [self InitAdsService];
        [self requestATT];
    }else{
        __weak __typeof__(self) weakSelf = self;
        [GoogleMobileAdsConsentManager.sharedInstance gatherConsentFromConsentPresentationViewController:^(NSError * _Nullable error) {
            __strong __typeof__(self) strongSelf = weakSelf;
            
            if (!strongSelf) {
                return;
            }
            
            if(error){
                consentCode = 0;
            }else{
                consentCode = 1;
            }
            
            NSLog(@"XXX runConsentFlow 2");
            [strongSelf InitAdsService];
            [strongSelf requestATT];
            
            if (GoogleMobileAdsConsentManager.sharedInstance.canRequestAds) {
                [strongSelf startGoogleMobileAdsSDK];
            }
        }];
    }
    
    // This sample attempts to load ads using consent obtained in the previous session.
    if (GoogleMobileAdsConsentManager.sharedInstance.canRequestAds) {
        [self startGoogleMobileAdsSDK];
    }
    
    [self stopTimeTick];
}

- (void)startGoogleMobileAdsSDK {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        // Initialize the Google Mobile Ads SDK.
        [GADMobileAds.sharedInstance startWithCompletionHandler:nil];
        
        // Request an ad.
        [AppOpenAdManager.sharedInstance loadAd];
        
        // Create Banner
        [[AdmobBannerAdsManager sharedInstance] createBanner];
    });
}

-(void) setupSdk{
}

#pragma mark - AppOpenAdManagerDelegate

- (void)adDidComplete {
    NSLog(@"Open Ad adDidComplete");
    [[ApplovinAdsHelper sharedObject] enableResumeAds];
}

- (void)onAdShow{
    NSLog(@"Open Ad onAdShow");
    [[ApplovinAdsHelper sharedObject] disableResumeAds];
}

-(void) adRevenue:(NSString *)adSourceName adUnitId:(NSString *)adUnitId adValue:(float)adValue{
    [[AnalyticHelper sharedObject] logRevenueAdmob:@"AOA" source:adSourceName adUnitId:adUnitId adValue:adValue];
}

-(void) loadLocalCache{
    NSUserDefaults *prefs = [NSUserDefaults standardUserDefaults];
    self.totalInterAdsHasShown = (int) [prefs integerForKey:@"totalInter"];
}

-(void) initFirebaseService{
    [AnalyticHelper sharedObject];
    
    [[FirebaseRemoteConfigHelper sharedObject] setFinishInitCallback:^{
        //refresh
        int delayShowInter = [[FirebaseRemoteConfigHelper sharedObject] getIntValue:@"ads_interval"];
        BOOL isShowResumeAds = [[FirebaseRemoteConfigHelper sharedObject] getBoolValue:@"resume_ads"];
        
        [[ApplovinAdsHelper sharedObject] setConfigValues:delayShowInter isShowResume:isShowResumeAds];
        
        isRemoteConfigFetched = true;
    }];
}

-(BOOL)IsConsentFlowDone{
    return isAATFlowFinished;
}

-(BOOL)IsRemoteConfigFetched{
    return isRemoteConfigFetched;
}

-(BOOL)IsATTFlowFinished{
    return isAATFlowFinished;
}

-(int)consentCode{
    return consentCode;
}

-(void) InitAdsService
{
    NSLog(@"XXX InitAdsService ====");
    AppOpenAdManager.sharedInstance.delegate = self;
    
    //Applovin Max
    [[ApplovinAdsHelper sharedObject] initWithCallback:^{
        //init analytic after
        NSLog(@"XXX Finish Max Term N Privacy Flow ====");
        [[AnalyticHelper sharedObject] start];
    }];
    
    [[ApplovinAdsHelper sharedObject] disableInterAds];
    
    [[ApplovinAdsHelper sharedObject] setAdClickCallback:^(NSDictionary<NSString *,id> * _Nullable adData) {
        if(adData != nil){
            //ad clicked
        }
    }];
    
    //ad display callback
    [[ApplovinAdsHelper sharedObject] setAdDisplayCallback:^(NSDictionary<NSString *,id> * _Nullable adData) {
        if(adData != nil){
            //ad displayed
            
            if ( [@"INTER" isEqualToString: adData[@"adFormat"]] ){
                NSLog(@"Log event inter Ad Displayed");
                [[AnalyticHelper sharedObject] logEvent:@"af_inters_displayed" parameters:nil];
                
                //count show inter
                self.totalInterAdsHasShown += 1;
                NSUserDefaults *prefs = [NSUserDefaults standardUserDefaults];
                [prefs setInteger:self.totalInterAdsHasShown forKey:@"totalInter"];
                
                if(self.totalInterAdsHasShown >= 1 && self.totalInterAdsHasShown <= 20){
                    NSString* eventName = [NSString stringWithFormat:@"af_inters_displayed_%d_times",(int) self.totalInterAdsHasShown];
                    NSLog(@"eventName: %@", eventName);
                    [[AnalyticHelper sharedObject] logEvent:eventName parameters:nil];
                }
                
                UnitySendMessage(SDK_OBJECT_NAME, "OnInterAdsDisplay",MakeStringCopy(@""));
                
            }else if( [@"REWARDED" isEqualToString: adData[@"adFormat"]] ){
                NSLog(@"Log event reward Ad Displayed");
                [[AnalyticHelper sharedObject] logEvent:@"af_rewarded_ad_displayed" parameters:nil];
            }
        }
    }];
    
    //ad ready to show callback
    [[ApplovinAdsHelper sharedObject] setAdReadyCallback:^(NSDictionary<NSString *,id> * _Nullable adData) {
        if(adData != nil){
            //ad ready to show
            if ( [@"INTER" isEqualToString: adData[@"adFormat"]] ){
                NSLog(@"Log event inter Ad Loaded");
                [[AnalyticHelper sharedObject] logEvent:@"af_inters_api_called" parameters:nil];
            }else if( [@"REWARDED" isEqualToString: adData[@"adFormat"]] ){
                NSLog(@"Log event reward ad Loaded");
                [[AnalyticHelper sharedObject] logEvent:@"af_rewarded_api_called" parameters:nil];
            }
        }
    }];
    
    [[ApplovinAdsHelper sharedObject] setAdRevenueCallback:^(NSDictionary<NSString *,id> * _Nullable adData) {
        if(adData != nil){
            [[AnalyticHelper sharedObject] logRevenue:adData];
        }
    }];
    
    [[ApplovinAdsHelper sharedObject] setAdRewardedCallback:^(NSDictionary<NSString *,id> * _Nullable adData) {
        if(adData != nil){
            NSString * requestCode = adData[@"requestCode"];
            UnitySendMessage(SDK_OBJECT_NAME, "OnVideoRewardedWithCode", MakeStringCopy(requestCode));
        }
    }];
    
    [[ApplovinAdsHelper sharedObject] setInterAdClosedCallback:^(NSDictionary<NSString *,id> * _Nullable adData) {
        if(adData != nil){
            NSLog(@"On Inter Ad Closed");
            NSString * requestCode = adData[@"requestCode"];
            UnitySendMessage(SDK_OBJECT_NAME, "OnCloseInterAds", MakeStringCopy(requestCode));
        }
    }];
    
    //set default value
    int delayShowInter = [[FirebaseRemoteConfigHelper sharedObject] getIntValue:@"ads_interval"];
    BOOL isShowResumeAds = [[FirebaseRemoteConfigHelper sharedObject] getBoolValue:@"resume_ads"];
    
    [[ApplovinAdsHelper sharedObject] setConfigValues:delayShowInter isShowResume:isShowResumeAds];
    
    [[ApplovinAdsHelper sharedObject] initAdsWithConsentFlow];
    
}

- (NSString *)getJsonFromObj:(id)obj {
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:obj options:0 error:&error];
    if (!jsonData) {
        NSLog(@"Got an error: %@", error);
        return @"";
    } else {
        NSString *jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        return jsonString;
    }
}

#pragma Admob Banner Delegates
- (void) admobBannerAdLoaded{
    
}

- (void) admobBannerAdClicked{
    [[ApplovinAdsHelper sharedObject] increaseBlockAutoShowInterCount];
}

- (void) admobBannerAdRevenue:(NSString * _Nonnull)adSourceName adUnitId:(NSString * _Nonnull)adUnitId adValue:(float) adValue {
    [[AnalyticHelper sharedObject] logRevenueAdmob:@"Banner" source:adSourceName adUnitId:adUnitId adValue:adValue];
}

@end

#ifdef __cplusplus
extern "C" {
#endif
    void _WarmUp(){
        //not used
    }
    
    void _OnReadyToShowAutoInterAds(){
        [[ApplovinAdsHelper sharedObject] onReadyToShowAutoInter];;
    }
    
    bool _IsRewardAvailable(){
        return [[ApplovinAdsHelper sharedObject] isRewardReady];;
    }
    
    void _ShowReward(int code){
        [[ApplovinAdsHelper sharedObject] showReward:code];
    }
    
    bool _IsInterAdsAvailable(){
        return [[ApplovinAdsHelper sharedObject] isInterReady];
    }
    
    void _ShowInterAds(int code){
        [[ApplovinAdsHelper sharedObject] showInter: code];
    }
    
    void _ShowBanner(){
        bool isShowCollapBanner = [[FirebaseRemoteConfigHelper sharedObject] getBoolValue:GetStringParam("show_collap_ad")];
        if(isShowCollapBanner)
            [[AdmobBannerAdsManager sharedInstance] showBanner];
        else
            [[ApplovinAdsHelper sharedObject] showBanner];
    }
    
    void _HideBanner(){
        bool isShowCollapBanner = [[FirebaseRemoteConfigHelper sharedObject] getBoolValue:GetStringParam("show_collap_ad")];
        if(isShowCollapBanner)
            [[AdmobBannerAdsManager sharedInstance] hideBanner];
        else
            [[ApplovinAdsHelper sharedObject] hideBanner];
    }
    
    void _HideMrec(){
        [[ApplovinAdsHelper sharedObject] hideMrec];
    }
    
    void _ShowMrec(){
        [[ApplovinAdsHelper sharedObject] showMrec];
    }
    
    void _ShowNativeRect(){
        [[ApplovinAdsHelper sharedObject] showNativeMrec];
    }
    
    void _HideNativeRect(){
        [[ApplovinAdsHelper sharedObject] hideNativeMrec];
    }
    
    void _ShowNativeBanner(){
        [[ApplovinAdsHelper sharedObject] showNativeBanner];
    }
    
    void _HideNativeBanner(){
        [[ApplovinAdsHelper sharedObject] hideNativeBanner];
    }
    
    void _HideAllBanner(){
        _HideBanner();
    }
    
    void _HideAllRectADS(){
        _HideMrec();
    }
    
    void _LoadAppOpenAds(){
        [[AppOpenAdManager sharedInstance] loadAd];
        //        [[ApplovinAdsHelper sharedObject] loadAppOpenAds];
    }
    void _ShowAppOpenAds(){
        [[AppOpenAdManager sharedInstance] showAdIfAvailable];
        //        [[ApplovinAdsHelper sharedObject] showAppOpenAds];
        
    }
    bool _IsAppOpenAdsReady(){
        return [[AppOpenAdManager sharedInstance] isAdAvailable];
        //        return [[ApplovinAdsHelper sharedObject] isAppOpenAdsReady];
    }
    
    char* _GetAdsId(){
        if([[AppsFlyerLib shared] advertisingIdentifier])
            return MakeStringCopy([[AppsFlyerLib shared] advertisingIdentifier]);
        return MakeStringCopy(@"");
    }
    
    //remote config apis
    bool _GetBoolValue(char* key){
        return [[FirebaseRemoteConfigHelper sharedObject] getBoolValue:GetStringParam(key)];
    }
    
    int _GetIntValue(char* key){
        return [[FirebaseRemoteConfigHelper sharedObject] getIntValue:GetStringParam(key)];
    }
    
    char* _GetStringValue(char* key){
        NSString* rtn = [[FirebaseRemoteConfigHelper sharedObject] getStringValue:GetStringParam(key)];
        return MakeStringCopy(rtn);
    }
    
    //device features
    void _Flash(){
        [[DevicesFeatures sharedObject] TurnTorchOn];
    }
    
    void _TurnOnTorchLight(){
        [[DevicesFeatures sharedObject] turnOnTorchForever];
    }
    
    void _TurnOffTorchLight(){
        [[DevicesFeatures sharedObject] turnOffTorchForever];
    }
    
    void _Vibrate(){
        [[DevicesFeatures sharedObject] Vibrate];
        
    }
    
    void _ShowRate(){
        if (@available(iOS 13.0, *)) {
            [[DevicesFeatures sharedObject] OpenRateIos13:[UIApplication sharedApplication].keyWindow.windowScene];
        } else {
            // Fallback on earlier versions
            [[DevicesFeatures sharedObject] OpenRate];
        }
    }
    
    bool _IsOnline(){
        return [[DevicesFeatures sharedObject] isOnline];
    }
    
    bool _IsCameraPermissionGranted(){
        return [[DevicesFeatures sharedObject] isCameraPermissionGranted];
    }
    
    void _ShowAppSetting(){
        [[ApplovinAdsHelper sharedObject] increaseBlockAutoShowInterCount];
        
        [[DevicesFeatures sharedObject] openSetting];
    }
    
    void _RequestCameraPermission(){
        [[ApplovinAdsHelper sharedObject] increaseBlockAutoShowInterCount];
        
        [[DevicesFeatures sharedObject] requestCameraPermission:^(BOOL granted) {
            dispatch_async(dispatch_get_main_queue(), ^{
                if(granted) {
                    //do camera intensive stuff
                    UnitySendMessage(SDK_OBJECT_NAME, "OnCameraPermissionGranted", MakeStringCopy(@"true"));
                    
                } else {
                    //user denied
                    UnitySendMessage(SDK_OBJECT_NAME, "OnCameraPermissionDenied", MakeStringCopy(@"ShowAlert"));
                }
            });
        }];
    }
    
    void _LogEvent(char* eventName,char* eventData){
        NSError*error;
        
        NSData *data = [GetStringParam(eventData) dataUsingEncoding:NSUTF8StringEncoding];
        if (!data) {
            return;
        }
        
        NSDictionary *dict = [NSJSONSerialization JSONObjectWithData:data options:0 error:&error];
        if (!dict) {
            return;
        }
        
        [[AnalyticHelper sharedObject] logEvent:GetStringParam(eventName) parameters:dict];
    }
    
    void _EnableInterAds(){
        [[ApplovinAdsHelper sharedObject] enableInterAds];
    }
    
    void _DisableInterAds(){
        [[ApplovinAdsHelper sharedObject] disableInterAds];
    }
    
    bool _IsConsentFlowDone(){
        return [[rofisdk sharedObject] IsConsentFlowDone] &&
        [[GoogleMobileAdsConsentManager sharedInstance ] isFlowFinished];
    }
    
    bool _AdMobCanRequestAds(){
        //case ko bat UMP
        if([[rofisdk sharedObject] consentCode] == 1){
            return true;
        }
        //case co UMP
        return [[GoogleMobileAdsConsentManager sharedInstance ] canRequestAds];
    }
    
    bool _IsATTFlowFinished(){
        return [[rofisdk sharedObject] IsATTFlowFinished];
    }
    
    bool _IsRemoteConfigReady(){
        return [[rofisdk sharedObject] IsRemoteConfigFetched];
    }
    
    void _LoadCollapsibleBanner(){
        [[AdmobBannerAdsManager sharedInstance] requestBanner:YES];
    }
    
#ifdef __cplusplus
}
#endif
