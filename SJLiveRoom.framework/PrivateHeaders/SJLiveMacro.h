//
//  SJLiveMacro.h
//  SJLiveRoom
//
//  Created by 李金柱 on 2020/5/7.
//  Copyright © 2020 yoka. All rights reserved.
//

#ifndef SJLiveMacro_h
#define SJLiveMacro_h

// 日志
#ifdef DEBUG
#define NSLog(FORMAT, ...) [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String];
//#define NSLog(FORMAT, ...) fprintf(stderr,"%s:%d\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(...)
#endif

#define YKWeakSelf                       __weak typeof(self) weakSelf = self;
#define YKStrongSelf                     __strong typeof(weakSelf) strongSelf = weakSelf;

#define key_window                       ([[UIApplication sharedApplication] keyWindow])

//PK
#define kRtmpKey        @"rtmp"
#define kHlsKey         @"Hls"
#define kFirstAnchor    @"first"

//iOS 系统版本号
#define IOSVersion [[UIDevice currentDevice].systemVersion floatValue]

//尺寸
#define kScreenWidth ([[UIScreen mainScreen] bounds].size.width)
#define kScreenHeight ([[UIScreen mainScreen] bounds].size.height)
#define kScreenScale [UIScreen mainScreen].scale
#define kProportion [[UIScreen mainScreen] bounds].size.width /375//缩放因子
#define kHeightRatio [[UIScreen mainScreen] bounds].size.height /667.0
#define SCALE(s)                         ((s) / 375.0 * kScreenWidth)
#define SCALE_HEIGHT(s)                  ((s) / 667.0 * kScreenHeight)

#define     IS_IPHONEX              ([UIScreen mainScreen].bounds.size.width >= 375.0f && [UIScreen mainScreen].bounds.size.height >= 812.0f)
#define     STATUSBAR_HEIGHT            (IS_IPHONEX ? 44.0f : 20.0f)
#define     TABBAR_HEIGHT               (IS_IPHONEX ? 49.0f + 34.0f : 49.0f)
#define     NAVBAR_HEIGHT               44.0f
#define     TabbarHeight ([[UIScreen mainScreen] bounds].size.height > 800 ? 83 :49)
#define     BOTTOM_SAFE_SPACE (IS_IPHONEX ? 34.0f : 0.0f)
#define     kIsLandspace        kScreenWidth > kScreenHeight


#define IMAGE(n)                         ([UIImage imageInKit:n])
// 颜色 字体
#define HEXRGBA(RGBValue,a) [UIColor colorWithRed:((float)((RGBValue & 0xFF0000) >> 16))/255.0 green:((float)((RGBValue & 0x00FF00) >> 8))/255.0 blue:((float)(RGBValue & 0x0000FF))/255.0 alpha:a]
#define HEXRGB(RGBValue)  HEXRGBA(RGBValue,1.0f)

#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)

#define kSystemFont(a)   [UIFont systemFontOfSize:a]
#define kMediumFont(a)   [UIFont fontWithName:@"PingFangSC-Medium" size:a]
#define kSemiboldFont(a) [UIFont fontWithName:@"PingFangSC-Semibold" size:a]
#define kLightFont(a)    [UIFont fontWithName:@"PingFangSC-Light" size:a]
#define kDINAltBoldFont(a)   [UIFont fontWithName:@"DINAlternate-Bold" size:a]//DINCondensed-Bold

//埋点
//#define YKCustomRecord(event,label,parameter) [DobestAnalyticsData setCustomEvent:event withLabel:label parameters:parameter :nil];

//通知
#define kNotificationAnchorCerDone  @"kNotificationAnchorCerDone"
#define kNotificationDoubleHitViewHide @"kNotificationDoubleHitViewHide"
#define kNotificationViewHide  @"kNotificationViewHide"
#define kNotificationDissMissGiftVC @"kNotificationDissMissGiftVC"
#define kNotificationDissMissCer @"kNotificationDissMissCer"
#define kNotificationHomeScrollUp @"kNotificationHomeScrollUp"
#define kNotificationHomeScrollTop @"kNotificationHomeScrollTop"
#define kNotificationAnchorEndLive @"kNotificationAnchorEndLive"
#define kNotificationLocation @"kNotificationLocation"
#define kNotificationPackageGiftSendSucess @"kNotificationPackageGiftSendSucess"
#define kNotificationDoubleGiftSendSucess @"kNotificationDoubleGiftSendSucess"
#define kNotificationOneMorePlayer @"kNotificationOneMorePlayer"
#define kNotificationFastLoginSuc @"kNotificationFastLoginSuc"
#define kNotificationRefreshGameOrderList @"kNotificationRefreshGameOrderList"
#define kNotificationCusAlertDismiss @"kNotificationCusAlertDissmiss"
#define kNotificationShowHomeGuide @"kNotificationShowHomeGuide"


//埋点key
#define kAppChannel  @"youer"
#define kRecordTimeKey @"TIME"
#define kLastLoginTimeKey   @"LAST_LOGIN_TIME"
#define KRecordChannelKey @"CHANNEL"
#define kRecordVersionKey @"VERSION"
#define kRecordUserIdKey @"ACCOUNT"
#define kRecordAnchorIdKey @"ANCHOR_ID"
#define KRecordIsNewKey @"IS_NEW_USER"
#define KRecordRechargeMoney @"RECHARGE_MONEY"
#define KRecordPhoneType @"DEVICE"
#define KRecordBannerId @"BANNER_ID"
#define KRecordEffectId @"EFFECT_ID"
#define KRecordEnterTime @"ENTER_ROOM_TIME"
#define KRecordLeaveTime @"LEAVE_ROOM_TIME"
#define KRecordFrom @"FROM"
#define KRecordRegisterWay @"REGISTER_TYPE"
#define KRecordRechargeType @"RECHARGE_TYPE"



#ifndef YK_PROTECT_STR
#define YK_PROTECT_STR(str) ((str == nil || [str isKindOfClass:[NSNull class]]) ? @"" : str)
#endif

#ifndef YK_PROTECT_Num
#define YK_PROTECT_Num(num) ((num == nil || [num isKindOfClass:[NSNull class]]) ? @(0):num)
#endif

#ifndef YK_PROTECT_ARR
#define YK_PROTECT_ARR(arr) ((arr == nil || [arr isKindOfClass:[NSNull class]]) ? [NSArray new]:arr)
#endif

#ifndef dispatch_queue_async_safe
#define dispatch_queue_async_safe(queue, block)\
if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(queue)) {\
block();\
} else {\
dispatch_async(queue, block);\
}

#define YK_Dispatch_Async_Main(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}
#endif

#ifndef dispatch_main_async_safe
#define dispatch_main_async_safe(block) dispatch_queue_async_safe(dispatch_get_main_queue(), block)
#endif


#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)




#endif /* SJLiveMacro_h */
