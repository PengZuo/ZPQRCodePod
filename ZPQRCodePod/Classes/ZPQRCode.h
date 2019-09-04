//
//  ZPQRCode.h
//  Pods-ZPQRCodePod_Example
//
//  Created by Uncel_Left on 2019/9/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZPQRCode : NSObject

/**
 生成二维码图片
 
 @param string 需要生成二维码的文字
 @param size 大小
 @param color 颜色
 @return 图
 */
+ (UIImage *)zm_generateCustomQRCode:(NSString *)string andSize:(CGFloat)size andColor:(UIColor *)color;

/**
 显示
 
 @param view 需要显示在什么View上
 */
+ (void)zm_setImageViewShadow:(UIImageView *)view;

@end

NS_ASSUME_NONNULL_END
