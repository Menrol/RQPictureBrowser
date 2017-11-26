# RQPictureBrowser
该框架需要使用SDWebImage加载图片
```objective-c
/**
 * @prama SelectedIndex 选中图片索引
 * @prama urls 照片url数组
 * @prama parentImageViews 显示照片的视图的数组
 
 * @returns 照片浏览器
 */
+ (instancetype)photoBroswerWithSelectedIndex:(NSInteger)selectedIndex
                             urls:(NSArray <NSURL *> *)urls
                 parentImageViews:(NSArray <UIImageView *> *)parentImageViews;
```
