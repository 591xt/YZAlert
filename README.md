# YZAlert

# 基于iOS原生封装的提示框

### 使用方法：     

#### 1.下载该静态库并导入      

<https://github.com/YouZhiZheShiJingCheng/YZAlert>

导入记得勾选拷贝，如图：

![Alt text](http://118.24.89.63:8080/1.png)

![Alt text](http://118.24.89.63:8080/4.png)

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


