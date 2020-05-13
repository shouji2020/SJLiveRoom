//
//  SJLiveDefine.h
//  SJLiveRoom
//
//  Created by 李金柱 on 2020/5/7.
//  Copyright © 2020 yoka. All rights reserved.
//

#ifndef SJLiveDefine_h
#define SJLiveDefine_h

//是否是马甲包
#define kIsMaJia false

//app名字
#define kAppName kIsMaJia ? @"假面剧本杀" : @"守姬直播"

#define SJLiveConfigObj [SJLiveManager shareManager].configModel

//第三方账号
#define kUM_appKey  @"5d5e0e48570df345ad0001ad"
#define kWX_appKey @"wx6d932e214467f751"
#define KWX_appSecret @"e10bc3053b918b06ecfc5f1039411233"
#define kQQ_appId  @"1109717921"
#define kSina_appKey @"1370172846"
#define kSina_appSecret @"6e314a4684a4cbe1985350b563d7ab2f"
#define kAMap_apiKey @"6fe8041b3e01190c6c9183f5497b5dd7"



#define kJPUSH_appKey @"91d6204587da64d37f081122"

#define kDoBest_appkey @"405"
#define kDoBest_groupId @"205"
//Key
#define kCurrentUserKey @"kCurrentUser_Key"
#define kBeautySettingKey @"kBeautySetting_Key"
#define kLiveroomNameKey  [NSString stringWithFormat:@"roomName_%ld",[YKLoginManager shareInstance].currentUser.userId]
#define kMultiRoomDesKey  [NSString stringWithFormat:@"multiRommDes_%ld",[YKLoginManager shareInstance].currentUser.userId]
#define kIsCompleteInfoKey @"kIsCompleteInfoKey"
#define kShareInstallParamsKey @"kShareInstallParamsKey"

#define kAliAuthPrefix  @"yoka://aliauth"

#define LivingTips   [NSString stringWithFormat:@"%@提倡绿色直播，严禁涉政、涉恐、涉黄、聚集闹事等内容，巡管24小时巡查，违规严惩",kAppName]

#define KShareTitleArr @[@{@"title":@"我正在守姬观看%@的直播，快来一起玩！",@"subTitle":@"有的人，该忘就忘了吧。再怎么痛，人家也不会心疼你。快来我的直播间，我来疼你。"},@{@"title":@"%@开播啦，速来守姬围观咯~",@"subTitle":@"从今天起，努力做一个可爱的人，不羡慕谁，不埋怨谁！来守姬，一起玩！"},@{@"title":@"%@说：带翅膀的不一定是天使，有可能是蚊子",@"subTitle":@"有趣的灵魂终会相遇，美好或许会迟到，但不会缺席。风里雨里，我在守姬等你~"}]

#define KShareTitleMajiaArr @[@{@"title":@"我正在假面剧本杀观看%@的直播，快来一起玩！",@"subTitle":@"有的人，该忘就忘了吧。再怎么痛，人家也不会心疼你。快来我的直播间，我来疼你。"},@{@"title":@"%@开播啦，速来假面剧本杀围观咯~",@"subTitle":@"从今天起，努力做一个可爱的人，不羡慕谁，不埋怨谁！来守姬，一起玩！"},@{@"title":@"%@说：带翅膀的不一定是天使，有可能是蚊子",@"subTitle":@"有趣的灵魂终会相遇，美好或许会迟到，但不会缺席。风里雨里，我在假面剧本杀等你~"}]


#define arrColor @[@222,@333,444]


//
//#if 0 //测试环境
//
//#define kNIM_appKey @"a36a97bdaf54a7d560eb76c2a364a43b"
//#define kPush_Prefix @"test_"
//
//#define kBase_URL   @"http://118.31.103.110"
//#define kShareLiveRoom_URL kIsMaJia ? @"https://sokiee.cn/apih5/multiplayer-live/index.html?sjId=" :  @"http://118.31.103.110/apih5/live/main/liveroom?sjid="
//#define kShareHomepage_URL @"http://118.31.103.110/apih5/live/main/homepage?sjId="
//#define kBaseImage_URL @"https://jqsj-oss.oss-cn-hangzhou.aliyuncs.com"
//#define kRegisterProtocol_URL (kIsMaJia ? @"https://sokiee.cn/apih5/agreement/fake-script-kill-user-agreement.html" :  @"http://118.31.103.110/apih5/agreement/sj_app_regist_agreement.html")
//#define kPrivateProtocol_URL (kIsMaJia ? @"https://sokiee.cn/apih5/agreement/fake-script-kill-privacy-policy.html" : @"https://www.sokiee.cn/apih5/agreement/sj_app_user_privacy_agreement.html")
//#define kRechargeProtocol_URL (kIsMaJia ? @"https://sokiee.cn/apih5/agreement/fake-script-kill-recharge-agreement.html" : @"http://118.31.103.110/apih5/agreement/sj_app_recharge_agreement.html")
//#define kWithdraw_URL @"http://118.31.103.110/apih5/agreement/withdrawal-process.html"
//#define kRechargeHelp_URL @"http://118.31.103.110/apih5/agreement/charge-specification.html"
//#define kTaskRule_URL @"http://118.31.103.110/apih5/agreement/sh_app_anchor_task.html"
//#define kSignin_URL @"http://118.31.103.110/apih5/active/signin/"
//#define kFish_URL @"http://118.31.103.110/apih5/active/treasure/index2.html"
//#define kBigWheel_URL @"http://118.31.103.110/apih5/active/wheel/"
//#define kShareEarn_Url  @"http://118.31.103.110/home/active/shareEarnedJelly/index.html"
//#define kFansRights_Url  @"https://sokiee.cn/active/fansClub/index.html"
//#define kGoldWheel_URL @"http://118.31.103.110/apih5/active/wheelNew/index.html"
//#define kWithPlay_URL  @"http://118.31.103.110/apih5/agreement/sj_app_play_with_you_agreement.html"
//#define kGamePlayPrice_Url @"https://sokiee.cn/active/geme-prices/index.html"
//#define kSignInHelp_Url @"https://sokiee.cn/active/signinhelp/index.html"
//
//#define kKnowledgeRight_Url  @"https://sokiee.cn/apih5/agreement/fake-script-kill-intellectual-property-protection-statement.html"  //马甲知识产权
//#define kSpecial_Url  @"https://sokiee.cn/apih5/agreement/fake-script-kill-multiplayer-live-broadcast-tips.html"  //马甲特别提示
//#define kMJPlayer_Url @"http://jbs.sokiee.cn/player/"
//#define kMJOwner_Url @"http://jbs.sokiee.cn/dm/"
//
//
//#else
//
//#define kNIM_appKey @"65e3afd79d502bd4dc3f9775d8bfffca"
//#define kPush_Prefix @""
//
//#define kBase_URL @"https://app.sokiee.cn"
//#define kShareLiveRoom_URL kIsMaJia ? @"https://sokiee.cn/apih5/multiplayer-live/index.html?sjId=" :  @"https://www.sokiee.cn/apih5/live/main/liveroom?sjid="
//#define kShareHomepage_URL @"https://www.sokiee.cn/apih5/live/main/homepage?sjId="
//#define kBaseImage_URL @"https://jqsj-oss.oss-cn-hangzhou.aliyuncs.com"
//#define kRegisterProtocol_URL (kIsMaJia ? @"https://sokiee.cn/apih5/agreement/fake-script-kill-user-agreement.html" :  @"https://www.sokiee.cn/apih5/agreement/sj_app_regist_agreement.html")
//#define kPrivateProtocol_URL (kIsMaJia ? @"https://sokiee.cn/apih5/agreement/fake-script-kill-privacy-policy.html" : @"https://www.sokiee.cn/apih5/agreement/sj_app_user_privacy_agreement.html")
//#define kRechargeProtocol_URL (kIsMaJia ? @"https://sokiee.cn/apih5/agreement/fake-script-kill-recharge-agreement.html" : @"https://www.sokiee.cn/apih5/agreement/sj_app_recharge_agreement.html")
//#define kWithdraw_URL @"https://www.sokiee.cn/apih5/agreement/withdrawal-process.html"
//#define kRechargeHelp_URL @"https://www.sokiee.cn/apih5/agreement/charge-specification.html"
//#define kTaskRule_URL @"https://www.sokiee.cn/apih5/agreement/sh_app_anchor_task.html"
//#define kSignin_URL @"https://www.sokiee.cn/apih5/active/signin/"
//#define kFish_URL @"https://sokiee.cn/apih5/active/seakingTreasure/"
//#define kBigWheel_URL @"https://www.sokiee.cn/apih5/active/wheel/"
//#define kShareEarn_Url  @"https://www.sokiee.cn/apih5/active/shareEarnedJelly/index.html"
//#define kFansRights_Url  @"https://sokiee.cn/active/fansClub/index.html"
//#define kGoldWheel_URL  @"https://www.sokiee.cn/apih5/active/wheelNew/index.html"
//#define kWithPlay_URL  @"https://www.sokiee.cn/apih5/agreement/sj_app_play_with_you_agreement.html"
//#define kGamePlayPrice_Url @"https://sokiee.cn/active/geme-prices/index.html"
//#define kSignInHelp_Url @"https://sokiee.cn/active/signinhelp/index.html"
//#define kKnowledgeRight_Url  @"https://sokiee.cn/apih5/agreement/fake-script-kill-intellectual-property-protection-statement.html"  //马甲知识产权
//#define kSpecial_Url  @"https://sokiee.cn/apih5/agreement/fake-script-kill-multiplayer-live-broadcast-tips.html"  //马甲特别提示
//#define kMJPlayer_Url @"http://jbs.sokiee.cn/player/"
//#define kMJOwner_Url @"http://jbs.sokiee.cn/dm/"


//#endif


#endif /* SJLiveDefine_h */
