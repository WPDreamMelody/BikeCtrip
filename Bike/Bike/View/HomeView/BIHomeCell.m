//
//  BIHomeCell.m
//  Bike
//
//  Created by kyu on 15/4/13.
//  Copyright (c) 2015年 kyu. All rights reserved.
//

#import "BIHomeCell.h"
#import "coupons.h"
#import "UIImageView+WebCache.h"
#import "BIAPIService.h"

@interface BIHomeCell(){
    UILabel *lbl;
    UIImageView *img;
}

@end

@implementation BIHomeCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)updateCell:(id)model{
    [self createCellContentView];
    
    coupons *md = (coupons *)model;
    lbl.text = md.cid;
    lbl.font = [UIFont systemFontOfSize:15.0];
    NSURL *url = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@",[BIAPIService getClientAppAPIBaseURLString],md.cpic]];
    [img sd_setImageWithPreviousCachedImageWithURL:url andPlaceholderImage:[UIImage imageNamed:@"overlay.png"] options:SDWebImageDelayPlaceholder progress:^(NSInteger receivedSize, NSInteger expectedSize) {
        BILog(@"%ld",receivedSize/expectedSize);
    } completed:^(UIImage *image, NSError *error, SDImageCacheType cacheType, NSURL *imageURL) {
        BILog(@"loadSuccess %@",imageURL);
    }];
    
//    CTShowViewBounds(lbl, [UIColor redColor]);
//    CTShowViewBounds(img, [UIColor greenColor]);
}

- (void)createCellContentView{
    if(!lbl){
        lbl = [[UILabel alloc]init];
        [self addSubview:lbl];
    }
    if(!img){
        img = [[UIImageView alloc]init];
        [self addSubview:img];
    }
    
    img.frame = CGRectMake(0, 0, self.viewHeight, self.viewHeight);
    lbl.frame = CGRectMake(img.viewXRight+15, 10, self.viewWidth-30-img.viewWidth, 15);
}

@end
