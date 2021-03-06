//
//  FindCell.h
//  ChatDemo
//
//  Created by acumen on 16/7/27.
//  Copyright © 2016年 acumen. All rights reserved.
//

#import "CommonCell.h"

@interface FindCell : CommonCell

@property (strong,nonatomic) UIImageView *iconImageView;
@property (strong,nonatomic) UILabel *titleLabel;
@property (strong,nonatomic) UIImageView *rightImageView;

- (void)setImageWithImageName:(NSString *)image
                        title:(NSString *)title;

- (void)setRightImageViewWithImageName:(NSString *)rightImageView;
- (void)dismissRightImageView;

@end
