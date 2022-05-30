### 主要可能需要用到的几个函数
`InitGraphics()`,初始化窗口。
`void MovePen(double x,double y)`,将笔移动到相应的位置，x,y为画笔**绝对**坐标。
`void DrawLine(double dx,double dy)`,在目前画笔位置基础上，画线，是相对坐标。
typedef void (*MouseEventCallback) (int x, int y, int button, int event);响应鼠标事件用的，括号里面是要实现的函数，类型是void函数指针，括号里面这个函数要自己写；
typedef void (*KeyboardEventCallback) (int key, int event);响应键盘事件用的，另外描述类比鼠标；
typedef void (*CharEventCallback) (int key);我没试过不知道。

typedef void (*TimerEventCallback) (int timerID);响应时间事件用的，里面这个函数，过一定时间会触发一次；需要配合Settimer()使用；

```
StartFilledRegion(1.0);
				DrawLine(windowSize[0] / 8+0.1, 0);
				DrawLine(0, -windowSize[1] / 4-0.1);
				DrawLine(-windowSize[0] / 8-0.1, 0);
				DrawLine(0, windowSize[1] / 4+0.1);

EndFilledRegion()
```
画图形，将这个区域里面的用新笔颜色填充。可以理解成画实心图形。
`(StartFilledRegion(1.0);（这个要当作开始）EndFilledRegion()（用这个结束）)`
`DrawTextString("菜单")`;写文字上去。
`SetPenColor(string)`,设置笔的颜色。例子：SetPenColor("BLACK");
`SetPenSize(double x)`,设置笔的尺寸；
`GetPenSize()`,获得目前笔的尺寸大小；
`RefreshWindow()`;字面意义，刷新窗口。
WindowX(double x)获得鼠标在窗口上的位置（X坐标）；
WindowY(double y)获得鼠标在窗口上的位置（Y坐标）；



