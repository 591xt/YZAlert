

#import <Foundation/Foundation.h>

typedef void(^Massage)();

@interface YZAlert : NSObject

+(instancetype)YZ;

//message代表提示的内容
//onetit，twotit，threetit，fourtit,fivetit,sixtit分别代表确定，取消，更多的标题
//withOneClick，withTwoClick，withThreeClick，withFourClick，withFiveClick，withSixClick分别对应上面标题的点击事件的回调。
//destructivetit字体红色选项，canceltit取消选项没有时传@“”,Destructive,cancel分别对应上面标题的点击事件的回调,center YES在屏幕中间显示NO在底部显示,


-(void)oneMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withDestructive:(NSString*)destructivetit withDestructiveClick:(Massage)Destructive withCancel:(NSString*)canceltit withCancelClick:(Massage)cancel isCenter:(BOOL)center;
-(void)twoMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withDestructive:(NSString*)destructivetit withDestructiveClick:(Massage)Destructive withCancel:(NSString*)canceltit withCancelClick:(Massage)cancel isCenter:(BOOL)center;
-(void)threeMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threeit withThreeClick:(Massage)three withDestructive:(NSString*)destructivetit withDestructiveClick:(Massage)Destructive withCancel:(NSString*)canceltit withCancelClick:(Massage)cancel isCenter:(BOOL)center;
-(void)fourMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threeit withThreeClick:(Massage)three withfour:(NSString*)fourtit withFourClick:(Massage)four withDestructive:(NSString*)destructivetit withDestructiveClick:(Massage)Destructive withCancel:(NSString*)canceltit withCancelClick:(Massage)cancel isCenter:(BOOL)center;
-(void)fiveMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threeit withThreeClick:(Massage)three withfour:(NSString*)fourtit withFourClick:(Massage)four withfive:(NSString*)fivetit withFiveClick:(Massage)five withDestructive:(NSString*)destructivetit withDestructiveClick:(Massage)Destructive withCancel:(NSString*)canceltit withCancelClick:(Massage)cancel isCenter:(BOOL)center;
-(void)sixMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threetit withThreeClick:(Massage)three withfour:(NSString*)fourtit withFourClick:(Massage)four withfive:(NSString*)fivetit withFiveClick:(Massage)five withsix:(NSString*)sixtit withSixClick:(Massage)six withDestructive:(NSString*)destructivetit withDestructiveClick:(Massage)Destructive withCancel:(NSString*)canceltit withCancelClick:(Massage)cancel isCenter:(BOOL)center;

@end
