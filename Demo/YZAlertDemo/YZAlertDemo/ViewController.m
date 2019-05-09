//
//  ViewController.m
//  YZAlertDemo
//
//  Created by yz on 2019/5/9.
//  Copyright © 2019 yz. All rights reserved.
//

#import "ViewController.h"
#import "YZAlert/YZAlert.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor=[UIColor whiteColor];
    
    [[YZAlert YZ] showActivityIndicatorMessage:@"正在转码"];
    
    dispatch_time_t delayTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC));
    dispatch_after(delayTime, dispatch_get_main_queue(), ^{
        [[YZAlert YZ] showMessage:@"正在准备上传" withTime:2];
    });
    
    
    dispatch_time_t delayTimet = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10 * NSEC_PER_SEC));
    dispatch_after(delayTimet, dispatch_get_main_queue(), ^{
        
        [YZAlert YZ].showMessageLab.text=@"正在上传";
        
    });
    
    
    dispatch_time_t delayTimett = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(20 * NSEC_PER_SEC));
    dispatch_after(delayTimett, dispatch_get_main_queue(), ^{
        [[YZAlert YZ] hideActivityIndicatorMessage];
        [[YZAlert YZ] showMessage:@"上传成功" withTime:2];
    });
    
    
    dispatch_time_t delayTimettt = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(25 * NSEC_PER_SEC));
    dispatch_after(delayTimettt, dispatch_get_main_queue(), ^{
        
            [[YZAlert YZ] title:@"提示" Message:@"测试" ActionArray:@[@{@"style":@"0",@"title":@"测试"},@{@"style":@"0",@"title":@"测试"},@{@"style":@"1",@"title":@"取消"},@{@"style":@"0",@"title":@"测试"}] withOneClick:^(NSInteger index) {
                if (index==0)
                {
                    NSLog(@"0");
                }
                else if (index==1)
                {
                    NSLog(@"1");
                }
                else if (index==2)
                {
                    NSLog(@"2");
                }
            } isCenter:YES];
    });
    
}


@end
