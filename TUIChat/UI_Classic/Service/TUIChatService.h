//
//  TUIChatManager.h
//  TXIMSDK_TUIKit_iOS
//
//  Created by kayev on 2021/8/12.
//

#import <Foundation/Foundation.h>
#import "TUICore.h"
#import "TUIDefine.h"

@import ImSDK_Plus;

NS_ASSUME_NONNULL_BEGIN
/**
 * TUIChatService 目前提供两个服务：
 * 1、创建聊天类
 * 2、通过 V2TIMMessage 对象获取展示文本信息
 *
 * 您可以通过 [TUICore callService:..] 方法唤起服务，不同的服务传参如下：
 * > 创建聊天类：
 *  serviceName: TUICore_TUIChatService
 *  method: TUICore_TUIChatService_GetChatViewControllerMethod
 *  param: @{
 *          TUICore_TUIChatService_GetChatViewControllerMethod_TitleKey : @"title",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_UserIDKey : @"userID",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_GroupIDKey : @"groupID",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_ConversationIDKey : @"conversationID",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_HighlightKeywordKey : @"highlightKeyword",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_LocateMessageKey : V2TIMMessage,
 *        };
 *
 * > 通过 V2TIMMessage 对象获取展示文本信息：
 *  serviceName: TUICore_TUIChatService
 *  method ：TUICore_TUIChatService_GetDisplayStringMethod
 *  param: @{TUICore_TUIChatService_GetDisplayStringMethod_MsgKey:V2TIMMessage};
 *
 *
 * TUIChatService currently provides two services:
 * 1. Creating chat class
 * 2. Getting display text information through V2TIMMessage object
 *
 * You can call the service through the [TUICore callService:..] method. The different service parameters are as follows:
 *  > Creating chat class
 *    serviceName: TUICore_TUIChatService
 *    method: TUICore_TUIChatService_GetChatViewControllerMethod
 *    param: @{
 *          TUICore_TUIChatService_GetChatViewControllerMethod_TitleKey : @"title",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_UserIDKey : @"userID",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_GroupIDKey : @"groupID",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_ConversationIDKey : @"conversationID",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_HighlightKeywordKey : @"highlightKeyword",
 *          TUICore_TUIChatService_GetChatViewControllerMethod_LocateMessageKey : V2TIMMessage,
 *        };
 *
 *  > Getting display text information through V2TIMMessage object
 *    serviceName: TUICore_TUIChatService
 *    method ：TUICore_TUIChatService_GetDisplayStringMethod
 *    param: @{TUICore_TUIChatService_GetDisplayStringMethod_MsgKey:V2TIMMessage};
 */


@interface TUIChatService : NSObject <TUIServiceProtocol>

+ (TUIChatService *)shareInstance;

@end
NS_ASSUME_NONNULL_END
