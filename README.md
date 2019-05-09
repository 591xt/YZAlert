# YZAlert

# 基于iOS原生封装的提示框

### 使用方法：     

#### 请参考Demo      

<<<<<<< HEAD
=======
<https://github.com/YouZhiZheShiJingCheng/YZAlert>

### 2.配置工程      

TARGETS->Build Settings->Other Linker Flags 添加一个  -ObjC

#### 3.开始应用         

导入头文件YZAlert.h

#### 单个提示

	[[YZAlert YZ] oneMessage:@"提示的内容" withAction:@"确定按钮或者取消按钮" withOneClick:^{

    //点击确定按钮或者取消按钮的事件，这段代码执行完之后就会自动弹出，非常简单

	}];		
	
![Alt text](http://images2015.cnblogs.com/blog/855243/201703/855243-20170315174613620-1932653415.png)

#### 两种选择加提示

	[[YZAlert YZ] twoMessage:@"提示内容" withAction:@"确定" withOneClick:^{

    //点击确定执行的代码

	} withtwo:@"取消" withTwoClick:^{

    //点击取消执行的代码

	}];

![Alt text](http://images2015.cnblogs.com/blog/855243/201703/855243-20170315174737854-254591314.png)

还有更多的就不一一展示了。
>>>>>>> 7ba55425278740511f7912cc654777c68b9206b6


