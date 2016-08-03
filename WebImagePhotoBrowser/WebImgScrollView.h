//
//  WebImgScrollView.h
//  Example
//
//  Created by Ellmcz on 16/7/30.
//  Copyright © 2016年 Ellmcz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebImgScrollView : UIView<UIScrollViewDelegate>
/** imgUrl  图像地址*/
@property (nonatomic, copy) NSString *imgUrl;

@property (nonatomic, strong) NSArray *imgUrlArr;
//图片的大小
@property (nonatomic, assign) CGSize imgSize;
//图片
@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) UIScrollView *scrollView;

@property (nonatomic,strong) UILabel * countLabel;

@property (nonatomic, strong) UIButton *downLoadBtn;

+ (WebImgScrollView *)showImageWithImageArr:(NSArray *)urlArr;


@end
