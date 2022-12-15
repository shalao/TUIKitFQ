#import "TUISystemMessageCell.h"
#import "TUIJoinGroupMessageCellData_Minimalist.h"
NS_ASSUME_NONNULL_BEGIN

@class TUIJoinGroupMessageCell_Minimalist;

@protocol TUIJoinGroupMessageCellDelegate_Minimalist <NSObject>

@optional

- (void)didTapOnNameLabel:(TUIJoinGroupMessageCell_Minimalist *)cell;

- (void)didTapOnSecondNameLabel:(TUIJoinGroupMessageCell_Minimalist *)cell;

- (void)didTapOnRestNameLabel:(TUIJoinGroupMessageCell_Minimalist *)cell withIndex:(NSInteger)index;

@end

@interface TUIJoinGroupMessageCell_Minimalist : TUISystemMessageCell


@property TUIJoinGroupMessageCellData_Minimalist *joinData;

@property (nonatomic,weak) id<TUIJoinGroupMessageCellDelegate_Minimalist> joinGroupDelegate;

@end



NS_ASSUME_NONNULL_END
