

#import <Foundation/Foundation.h>

typedef void(^Massage)();

@interface YZAlert : NSObject

+(instancetype)YZ;

//message代表提示的内容
//onetit，twotit，threetit，fourtit,fivetit,sixtit分别代表确定，取消，更多的标题
//withOneClick，withTwoClick，withThreeClick，withFourClick，withFiveClick，withSixClick分别对应上面标题的点击事件的回调。

-(void)oneMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one;
-(void)twoMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two;
-(void)threeMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threeit withThreeClick:(Massage)three;
-(void)fourMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threeit withThreeClick:(Massage)three withfour:(NSString*)fourtit withFourClick:(Massage)four;
-(void)fiveMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threeit withThreeClick:(Massage)three withfour:(NSString*)fourtit withFourClick:(Massage)four withfive:(NSString*)fivetit withFiveClick:(Massage)five;
-(void)sixMessage:(NSString*)message withAction:(NSString*)onetit withOneClick:(Massage)one withtwo:(NSString*)twotit withTwoClick:(Massage)two withthree:(NSString*)threetit withThreeClick:(Massage)three withfour:(NSString*)fourtit withFourClick:(Massage)four withfive:(NSString*)fivetit withFiveClick:(Massage)five withsix:(NSString*)sixtit withSixClick:(Massage)six;

@end
