//
//  TUISelectAvatarController.h
//  TUIKitDemo
//
//  Created by wyl on 2022/6/27.
//  Copyright © 2022 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, TUISelectAvatarType) {
    TUISelectAvatarTypeUserAvatar,
    TUISelectAvatarTypeGroupAvatar,
    TUISelectAvatarTypeCover,
    TUISelectAvatarTypeConversationBackGroundCover,
};
@interface TUISelectAvatarController : UIViewController
@property (nonatomic, copy) void (^selectCallBack)(NSString *urlStr);
@property (nonatomic, assign) TUISelectAvatarType selectAvatarType;
@property (nonatomic, copy) NSString *profilFaceURL;
@property (nonatomic, strong) UIImage *cacheGroupGridAvatarImage;
@property (nonatomic, copy) NSString *createGroupType;
@end

NS_ASSUME_NONNULL_END
