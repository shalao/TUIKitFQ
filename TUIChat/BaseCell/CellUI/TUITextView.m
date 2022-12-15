//
//  TUITextView.m
//  Masonry
//
//  Created by xiangzhang on 2022/10/14.
//

#import "TUITextView.h"

@implementation TUITextView

- (BOOL)canBecameFirstResponder {
    return YES;
}

- (BOOL)canPerformAction:(SEL)action withSender:(id)sender {
    return NO;
}

- (void)buildMenuWithBuilder:(id<UIMenuBuilder>)builder API_AVAILABLE(ios(13.0))  {
    if (@available(iOS 16.0, *)) {
        [builder removeMenuForIdentifier:UIMenuLookup];
    }
    [super buildMenuWithBuilder:builder];
}

@end
