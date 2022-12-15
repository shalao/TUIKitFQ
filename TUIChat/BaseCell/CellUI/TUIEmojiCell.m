//
//  TUIEmojiCell.m
//  TUIChat
//
//  Created by wyl on 2022/5/26.
//
#import "TUIEmojiCell.h"
#import "TUIEmojiCellData.h"
#import "TUICommonModel.h"
#import "NSString+emoji.h"

#define Avatar_Size 40

@interface TUIEmojiCell()
@property (nonatomic, strong) UIImageView *avatar;
@property (nonatomic, strong) UILabel *displayName;
@property (nonatomic, strong) UILabel *tapToRemoveLabel;
@property (nonatomic, strong) UIImageView *emoji;
@property (nonatomic, strong) TUIEmojiCellData*data;
@end

@implementation TUIEmojiCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        _avatar = [[UIImageView alloc] init];
        _avatar.layer.cornerRadius = Avatar_Size / 2.0;
        _avatar.layer.masksToBounds = YES;
        [self addSubview:_avatar];
        
        _displayName = [[UILabel alloc] init];
        _displayName.font = [UIFont boldSystemFontOfSize:kScale390(16)];
        _displayName.textColor = [UIColor tui_colorWithHex:@"#666666"];
        [self addSubview:_displayName];
        
        _tapToRemoveLabel = [[UILabel alloc] init];
        _tapToRemoveLabel.font = [UIFont systemFontOfSize:kScale390(12)];
        _tapToRemoveLabel.textColor = [UIColor tui_colorWithHex:@"#666666"];
        [self addSubview:_tapToRemoveLabel];
        
        _emoji = [[UIImageView alloc] init];
        [self addSubview:_emoji];
    }
    return self;
}

#pragma mark - UI
- (void)prepareUI {
    self.layer.cornerRadius = 12.0f;
    self.layer.masksToBounds = YES;
}

- (void)fillWithData:(TUIEmojiCellData *)data {
    self.data = data;
    [_avatar sd_setImageWithURL:[NSURL URLWithString:data.faceURL] placeholderImage:DefaultAvatarImage];
    _displayName.text = data.displayName;
    _tapToRemoveLabel.text = @"";
    if (data.isCurrentUser) {
        _displayName.text = @"You";
        _tapToRemoveLabel.text = @"Tap to remove";
    }

    [_emoji setImage:[data.emojiName getEmojiImage]];
    
}

- (void)layoutSubviews {
    [super layoutSubviews];
    _avatar.frame = CGRectMake(kScale390(26) ,
                               (self.contentView.frame.size.height - kScale390(40) )*0.5,
                               kScale390(40),
                               kScale390(40));
    
    _displayName.frame = CGRectMake(_avatar.frame.origin.x + _avatar.frame.size.width + kScale390(16) ,
                                    (self.contentView.frame.size.height - kScale390(22) )*0.5  ,
                                    self.contentView.frame.size.width - kScale390(60) ,
                                    kScale390(22));
    if (self.data.isCurrentUser) {
        _displayName.frame = CGRectMake(_avatar.frame.origin.x + _avatar.frame.size.width + kScale390(16) ,
                                        _avatar.frame.origin.y  ,
                                        self.contentView.frame.size.width - kScale390(60) ,
                                        kScale390(22));
        _tapToRemoveLabel.frame = CGRectMake(_avatar.frame.origin.x + _avatar.frame.size.width + kScale390(16) ,
                                             _displayName.frame.origin.y + _displayName.frame.size.height + kScale390(4) ,
                                             self.contentView.frame.size.width - kScale390(60) ,
                                             kScale390(12));
    }
    
    _emoji.frame = CGRectMake(self.contentView.frame.size.width - kScale390(32) ,
                              (self.contentView.frame.size.height - kScale390(16) )*0.5,
                              kScale390(16),
                              kScale390(16));
}

@end
