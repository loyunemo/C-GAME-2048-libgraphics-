### ��Ҫ������Ҫ�õ��ļ�������
`InitGraphics()`,��ʼ�����ڡ�
`void MovePen(double x,double y)`,�����ƶ�����Ӧ��λ�ã�x,yΪ����**����**���ꡣ
`void DrawLine(double dx,double dy)`,��Ŀǰ����λ�û����ϣ����ߣ���������ꡣ
typedef void (*MouseEventCallback) (int x, int y, int button, int event);��Ӧ����¼��õģ�����������Ҫʵ�ֵĺ�����������void����ָ�룬���������������Ҫ�Լ�д��
typedef void (*KeyboardEventCallback) (int key, int event);��Ӧ�����¼��õģ��������������ꣻ
typedef void (*CharEventCallback) (int key);��û�Թ���֪����

typedef void (*TimerEventCallback) (int timerID);��Ӧʱ���¼��õģ����������������һ��ʱ��ᴥ��һ�Σ���Ҫ���Settimer()ʹ�ã�

```
StartFilledRegion(1.0);
				DrawLine(windowSize[0] / 8+0.1, 0);
				DrawLine(0, -windowSize[1] / 4-0.1);
				DrawLine(-windowSize[0] / 8-0.1, 0);
				DrawLine(0, windowSize[1] / 4+0.1);

EndFilledRegion()
```
��ͼ�Σ������������������±���ɫ��䡣�������ɻ�ʵ��ͼ�Ρ�
`(StartFilledRegion(1.0);�����Ҫ������ʼ��EndFilledRegion()�������������)`
`DrawTextString("�˵�")`;д������ȥ��
`SetPenColor(string)`,���ñʵ���ɫ�����ӣ�SetPenColor("BLACK");
`SetPenSize(double x)`,���ñʵĳߴ磻
`GetPenSize()`,���Ŀǰ�ʵĳߴ��С��
`RefreshWindow()`;�������壬ˢ�´��ڡ�
WindowX(double x)�������ڴ����ϵ�λ�ã�X���꣩��
WindowY(double y)�������ڴ����ϵ�λ�ã�Y���꣩��



