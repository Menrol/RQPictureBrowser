//
//  RQPictureBrowserViewController.h
//  照片浏览器
//
//  Created by Apple on 2017/8/25.
//  Copyright © 2017年 WRQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RQPictureBrowserViewController : UIViewController

/**
 * @prama SelectedIndex 选中图片索引
 * @prama urls 照片url数组
 * @prama parentImageViews 显示照片的视图的数组
 
 * @returns 照片浏览器
 */
+ (instancetype)photoBroswerWithSelectedIndex:(NSInteger)selectedIndex
                             urls:(NSArray <NSURL *> *)urls
                 parentImageViews:(NSArray <UIImageView *> *)parentImageViews;


@property(nonatomic, strong) UICollectionView *collectionView;

@end

@interface RQPictureBrowserViewLayout : UICollectionViewFlowLayout
@end
