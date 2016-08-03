//
//  WebImageZoomScrollView.h
//  Example
//
//  Created by Ellmcz on 16/7/30.
//  Copyright © 2016年 Ellmcz. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface WebImageZoomScrollView : UIView<UIScrollViewDelegate>
/** imgUrl  图像地址*/
@property (nonatomic, copy) NSString *imgUrl;

//图片的大小
@property (nonatomic, assign) CGSize imgSize;
//图片
@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) UIScrollView *scrollView;
//和scrollview一般大的   缩放用的
@property (nonatomic, strong) UIView *scaleView;

@property (nonatomic, strong) UIButton *downLoadBtn;

@property (nonatomic,copy) void (^RemoveView)();

@end
