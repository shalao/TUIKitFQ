//
//  TUIOrderCell.h
//  TUIChat
//
//  Created by summeryxia on 2022/6/13.
//

#import "TUIBubbleMessageCell_Minimalist.h"
#import "TUIOrderCellData_Minimalist.h"

NS_ASSUME_NONNULL_BEGIN

@interface TUIOrderCell_Minimalist : TUIBubbleMessageCell_Minimalist

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *descLabel;
@property (nonatomic, strong) UIImageView *iconView;
@property (nonatomic, strong) UILabel *priceLabel;
@property (nonatomic, strong) TUIOrderCellData_Minimalist *customData;

- (void)fillWithData:(TUIOrderCellData_Minimalist *)data;

@end

NS_ASSUME_NONNULL_END
