//
//  SJLiveManager.h
//  SJLiveRoom
//
//  Created by 李金柱 on 2020/5/7.
//  Copyright © 2020 yoka. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^completeBlock)(BOOL sucess,NSError * _Nonnull error);


@protocol SJLiveDelegate <NSObject>

@optional

- (void)rechargeAction;

@end

NS_ASSUME_NONNULL_BEGIN

@interface SJLiveManager : NSObject

+ (instancetype)shareManager;
/**
是否启用测试环境
@param testEnv 是否启用测试环境，true 启用，false 不启用。默认为 false

 @discussion 建议调试时先设置为测试环境
*/
- (void)setTestEnv:(BOOL)testEnv;
/**
 直播代理 处理相关回调
@param delegate 代理对象

*/
-  (void)setLiveDelegate:(id<SJLiveDelegate>)delegate;
/**
 启动sdk
@param target 启动时的对象
@param phone 用户手机号
@param token 用户token
@param complete 启动结果回调
*/
- (void)startWithTarget:(UIViewController *)target phone:(NSString *)phone userInfoToken:(NSString *)token complete:(completeBlock)complete;



@end

NS_ASSUME_NONNULL_END
