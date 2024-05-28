//
//  AdmobBannerAdsManager.h
//  UnityFramework
//
//  Created by Admin on 28/05/2024.
//

#import <GoogleMobileAds/GoogleMobileAds.h>
#import <UIKit/UIKit.h>

@protocol AdmobBannerAdsManagerDelegate <NSObject>
- (void) admobBannerAdLoaded;
- (void) admobBannerAdClicked;
- (void) admobBannerAdRevenue:(NSString * _Nonnull)adSourceName adUnitId:(NSString * _Nonnull)adUnitId adValue:(float) adValue ;
@end

@interface AdmobBannerAdsManager : NSObject <GADBannerViewDelegate>
@property (nonatomic, weak) id <AdmobBannerAdsManagerDelegate> _Nullable delegate;

+ (nonnull AdmobBannerAdsManager *)sharedInstance;
- (void)createBanner;
- (void)showBanner;
- (void)hideBanner;
- (void)requestBanner :(BOOL) isForceRequest;
@end

