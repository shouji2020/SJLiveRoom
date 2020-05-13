//
//  SJLiveRefDefine.h
//  SJLiveRoom
//
//  Created by 李金柱 on 2020/5/7.
//  Copyright © 2020 yoka. All rights reserved.
//

#ifndef SJLiveRefDefine_h
#define SJLiveRefDefine_h

typedef NS_ENUM(NSInteger,YKCustomAttachType)
{
    YKCustomAttachTypeGift = 0,
    YKCustomAttachTypeBarrage = 1,//弹幕
    YKCustomAttachTypeIMOrder = 2,//IM订单消息
};


//key 自定义消息相关key
#define YKCMType             @"cusType"
#define YKCMData             @"data"
//礼物
#define YKCMGiftType         @"giftType"
#define YKCMGiftEffect       @"giftEffectUrl"
#define YKCMGiftID           @"giftId"
#define YKCMGiftName         @"giftName"
#define YKCMGiftUrl          @"giftUrl"
#define YKCMGiftPointArr     @"pointArray"
#define YKCMGiftCount        @"count"
#define YKCMGiftDoubleHit    @"doubleHit"
#define YKCMEffLocation      @"effectsLocation"
#define YKCMModifyTimeStamp  @"modifyTimeStamp"
#define YKCMRandom           @"random"
#define YKCMGfitSubSkill     @"giftSubSkill"
#define YKCMGiftDuration     @"giftDuration"
#define YKCMGiftWinMultiples @"winMultiples"
#define YKCMGiftAcceptName   @"acceptName"
#define YKCMGiftGiftSound    @"giftSound"

//公用
#define YKCMNick             @"nickName"
#define YKCMAvatar           @"avatar"
#define YKCMLevel            @"level"
#define YKCMUid              @"uid"
#define YKCMIsAnchor         @"anchor"
//弹幕
#define YKCMText             @"text"

//平台大事件
#define YKCMPlatformSendId   @"sendUserId"
#define YKCMPlatformRecId    @"receiveUserId"
#define YKCMPlatformSendNick @"sendUserNick"
#define YKCMPlatformRecNick  @"receiveUserNick"


//消息扩展字段相关key
#define YKExtIsAnchor     @"isAnchor"
#define YKExtNickName     @"nickName"
#define YKExtLevel        @"level"
#define YKExtType         @"type"
#define YKExtGiftNum      @"giftNum"
#define YKExtGiftName     @"giftName"
#define YKExtGiftIcon     @"giftIcon"
#define YKExtUid          @"uid"

//IM订单
#define YKIMMsg           @"msg"
#define YKIMTitleColor    @"titleColor"
#define YKIMTitle         @"title"
#define YKIMTitleIcon     @"titleIcon"
#define YKIMApplyId       @"applyId"
#define YKIMShowApplyButton     @"showApplyButton"


#define kFollowArray @[@"关注了主播，比心哦",@"关注了主播，么么哒",@"关注了主播，觉得主播棒棒哒"]

typedef NS_ENUM(NSUInteger,YKUserRoleType){
    YKUserRoleTypeAnchor = 1, // 主播
    YKUserRoleTypeAudience,// 用户
    YKUserRoleTypeAudienceLandscape,// 横屏用户用户
    YKUserRoleTypeAnchorGame,// 手游直播主播
    YKUserRoleTypeGroupAnchor,// 多人直播间主播
    YKUserRoleTypeGroupAudience,// 多人直播间连麦观众

};

typedef NS_ENUM(NSInteger,YKLiveRoomChatType) {
    YKLiveRoomChatTypeNormal ,//普通消息
    YKLiveRoomChatTypeWelcome ,//欢迎语
    YKLiveRoomChatTypeQuickMsg,//快速回复
};

typedef NS_ENUM(NSInteger , YKLiveRoomChatMsgType){
    
    //直播间
    YKLiveRoomChatMsgTypeChat       = 0,                //  聊天
    YKLiveRoomChatMsgTypeSendNormalGift   = 1,          //  送礼物
    YKLiveRoomChatMsgTypeFollow     = 2,                //  关注
    YKLiveRoomChatMsgTypeJoinRoom   = 3,                //  进房
    YKLiveRoomChatMsgTypeAnchorLeave = 4,               //主播下播了
    YKLiveRoomChatMsgTypeWarningAnchor = 5,             //警告主播
    YKLiveRoomChatMsgTypeMute        = 6,                //  被禁言
    YKLiveRoomChatMsgTypeAddAdmin   = 7,                //  被设为管理员
    YKLiveRoomChatMsgTypeKickout    = 8,                //  被踢出房间
    YKLiveRoomChatMsgTypeEnterBack  = 9,               //  主播离开了
    YKLiveRoomChatMsgTypeEnterFront = 10,              //  主播回来了 恢复
    YKLiveRoomChatMsgTypeSystem = 11,                   //系统消息
    YKLiveRoomChatMsgTypeSeaKing = 12,             //  海王信息
    YKLiveRoomChatMsgTypeAnchorStartLiving   = 13,      //  主播开播 录播直播间处理
    YKLiveRoomChatMsgTypeJoinFansClub = 14,           //加入粉丝团
    
    
    YKLiveRoomChatMsgTypeAnchorOnLine  = 21,            //离线直播间内，收到直播上线消息

    
    
    //直播间星冠
    YKLiveRoomChatMsgTypeSystemNotify    = 33,          //星冠活动系统消息
    YKLiveRoomChatMsgTypeStarCrownResult = 34,          //星冠晋级结果、进度
    
    YKLiveRoomChatMsgTypePlatformNotify  = 35,          //通用平台大事件

    YKLiveRoomChatMsgTypeShared          = 39,          //分享
    
    YKLiveRoomChatMsgTypeSayhello = 100,                 //进房欢迎本地插入
};




#endif /* SJLiveRefDefine_h */
