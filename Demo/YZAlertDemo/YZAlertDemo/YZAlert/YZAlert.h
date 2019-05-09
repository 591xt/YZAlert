

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^Action)(NSInteger index);

//默认提示文字2秒后消失
#define HIDDENTIME 2

@interface YZAlert : NSObject

//用于更改带菊花的提示文字
@property(strong,nonatomic)UILabel* showMessageLab;

/**
 初始化
 
 @return YZAlert
 */
+(instancetype)YZ;

/**
 隐藏带菊花的提示
 
 */
-(void)hideActivityIndicatorMessage;

/**
 显示提示内容根据宏定义的时间消失
 
 @param message 提示内容
 */
-(void)showMessage:(NSString*) message;

/**
 显示带菊花的提示
 
 @param message 提示内容
 */
-(void)showActivityIndicatorMessage:(NSString*) message;

/**
 显示提示内容根据传入的时间消失
 
 @param message 提示内容
 @param time 几秒后消失
 */
-(void)showMessage:(NSString*) message withTime:(CGFloat)time;

/**
 简化UIAlertController
 
 @param title title
 @param message message
 @param actionArray actionArray 例如@[@{@"style":@"UIAlertActionStyleDefault",@"title":@"测试"}] 等同于 @[@{@"style":@"0",@"title":@"测试"}]
 @param Click 点击事件回调，index代表点击的第几个
 @param center 是否在中间显示，是传YES，否传NO
 */
-(void)title:(NSString*)title Message:(NSString*)message ActionArray:(NSArray*) actionArray  withOneClick:(Action)Click isCenter:(BOOL)center;


@end
