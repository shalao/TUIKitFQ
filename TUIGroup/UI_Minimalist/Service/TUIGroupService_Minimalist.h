
#import <Foundation/Foundation.h>
#import "TUIGroupInfoController_Minimalist.h"
#import "TUISelectGroupMemberViewController_Minimalist.h"
#import "TUICore.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * TUIGroupService 目前提供一个服务：
 * 创建群成员选择器
 *
 * 您可以通过 [TUICore callService:..] 方法唤起服务，不同的服务传参如下：
 * > 创建群资料界面：
 * serviceName: TUICore_TUIGroupService_Minimalist
 * method: TUICore_TUIGroupService_GetGroupInfoControllerMethod
 * param: @{
 *         TUICore_TUIGroupService_GetGroupInfoControllerMethod_GroupIDKey; @"groupID"
 *        };
 * > 创建群成员选择器：
 * serviceName: TUICore_TUIGroupService_Minimalist
 * method: TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod
 * param: @{
 *         TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod_GroupIDKey : @"groupID",
 *         TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod_NameKey : @"name",
 *         TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod_OptionalStyleKey : style
 *        };
 * > 创建群聊：
 * serivceName: TUICore_TUIGroupService_Minimalist
 * method: TUICore_TUIGroupService_CreateGroupMethod
 * param: @{
 *         TUICore_TUIGroupService_CreateGroupMethod_GroupTypeKey: @"GroupType",
 *         TUICore_TUIGroupService_CreateGroupMethod_OptionKey: option
 *         TUICore_TUIGroupService_CreateGroupMethod_ContactsKey: contacts
 *         TUICore_TUIGroupService_CreateGroupMethod_CompletionKey: createGroupCompletion
 *        };
 *
 *
 * TUIGroupService currently provides a service:
 * Create group member selector
 *
 * You can call the service through the [TUICore callService:..] method. The different service parameters are as follows:
 * > Create group information interface:
 * serviceName: TUICore_TUIGroupService_Minimalist
 * method: TUICore_TUIGroupService_GetGroupInfoControllerMethod
 * param: @{
 *          TUICore_TUIGroupService_GetGroupInfoControllerMethod_GroupIDKey; @"groupID"
 *       };
 * > Create group member selector:
 * serviceName: TUICore_TUIGroupService_Minimalist
 * method: TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod
 * param: @{
 *          TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod_GroupIDKey : @"groupID",
 *          TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod_NameKey : @"name",
 *          TUICore_TUIGroupService_GetSelectGroupMemberViewControllerMethod_OptionalStyleKey : style
 *       };
 * > Create a group chat:
 * serivceName: TUICore_TUIGroupService_Minimalist
 * method: TUICore_TUIGroupService_CreateGroupMethod
 * param: @{
 *          TUICore_TUIGroupService_CreateGroupMethod_GroupTypeKey: @"GroupType",
 *          TUICore_TUIGroupService_CreateGroupMethod_OptionKey: option
 *          TUICore_TUIGroupService_CreateGroupMethod_ContactsKey: contacts
 *          TUICore_TUIGroupService_CreateGroupMethod_CompletionKey: createGroupCompletion
 *        };
 */


@interface TUIGroupService_Minimalist : NSObject <TUIServiceProtocol>

+ (TUIGroupService_Minimalist *)shareInstance;

- (void)getGroupNameNormalFormatByContacts:(NSArray<TUICommonContactSelectCellData *> *)contacts
                                completion:(void (^)(BOOL success,NSString *groupName))completion;

- (void)createGroup:(NSString *)groupType
       createOption:(V2TIMGroupAddOpt)createOption
           contacts:(NSArray<TUICommonContactSelectCellData *> *)contacts
         completion:(void (^)(BOOL success, NSString *groupID, NSString *groupName))completion;
@end

NS_ASSUME_NONNULL_END
