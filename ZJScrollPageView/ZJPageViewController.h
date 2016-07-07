//
//  ZJPageViewController.h
//  ZJScrollPageView
//
//  Created by ZeroJ on 16/7/6.
//  Copyright © 2016年 ZeroJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZJScrollPageViewDelegate.h"

@protocol PageTableViewDelegate <NSObject>

- (void)scrollViewIsScrolling:(UIScrollView *)scrollView;
- (void)setupScrollViewOffSetYWhenViewWillAppear:(UIScrollView *)scrollView;
@end

@interface ZJPageViewController : UIViewController<ZJScrollPageViewChildVcDelegate>
@property(strong, nonatomic)UIScrollView *scrollView;

@property(weak, nonatomic)id<PageTableViewDelegate> delegate;


@end