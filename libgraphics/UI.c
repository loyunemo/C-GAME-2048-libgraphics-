#include "UI.h"
#include <game.h>
#include <fundamental.h>
#include<graphics.h>
#include<UI.h>
#include<random.h>
#include<extgraph.h>
#include<fundamental.h>
extern int score;
static int length=0;
static char p[40];
static int statecheck=0;
static int station=1;
extern boxset box[4][4];
void change(int x,int y,int button,int event)/*切换界面*/
{
	double sx, sy;
	sx = WindowX(x);
	sy = WindowY(y);
	if (sx<2 * GetWindowWidth() / 3 && sx>GetWindowWidth() / 3 && sy < 4 * GetWindowHeight() / 7 && sy>3 * GetWindowHeight() / 7)
	{
		
		if (button == LEFT_BUTTON && event == BUTTON_DOWN)
		{
			DrawBoxdown();
			
		}
		else if (button == LEFT_BUTTON && event == BUTTON_UP)
		{
			mode(2);
			cancelMouseEvent();
		}
	}
	else 
	DrawBox();
}
void initUI()
{
	
	/*InitGraphics();*/
	
	settings();
	/*ranking();*/
	startGame();
}

static void settings()
{
	SetPenColor("Green");
	MovePen(GetWindowWidth() / 2.0, GetWindowHeight() / 4.0 * 3.0);
	MovePenR(-GetWindowWidth() / 6, GetWindowHeight() / 14);
	Draw2();
	MovePenR(0.2,0);
	Draw0();
	MovePenR(0.2,0);
	Draw4(); 
	MovePenR(0.4,0);
	Draw8();
	
		
}
void ranking()
{
	
}
static void startGame()
{
	MovePen(GetWindowWidth() / 2, GetWindowHeight() / 2);
	DrawBox();
	
}

void enter(int x,int y,int button, int event )
{
	double sx, sy;
	sx = WindowX(x);
	sy = WindowY(y);
	double windowSize[2] = { GetWindowWidth(), GetWindowHeight() };
	
	double center[2] = { windowSize[0] / 2, windowSize[1] / 2 };
	
	if (sx<2 * GetWindowWidth() / 3 && sx>GetWindowWidth() / 3 && sy < 4 * GetWindowHeight() / 7 && sy>3 * GetWindowHeight() / 7)
	{

		if (button == LEFT_BUTTON && event == BUTTON_DOWN)
		{
			DrawBoxdown();
			
		}
		else if (button == LEFT_BUTTON && event == BUTTON_UP)
		{
			DrawBoxon();
			mode(2);
		}
		else
			DrawBoxon();
	}
	 
	else
	{
		RefreshWindow();
		SetPenColor("White");
		DrawBox();
	}
}
void menufontarea()
{
	double windowSize[2] = { GetWindowWidth(), GetWindowHeight() };

	double center[2] = { windowSize[0] / 2, windowSize[1] / 2 };
	MovePen(0, GetWindowHeight());
	StartFilledRegion(1.0);
	DrawLine(windowSize[0] / 12, 0);
	DrawLine(0, -0.3);
	DrawLine(-windowSize[0] / 12, 0);
	DrawLine(0, 0.3);
	EndFilledRegion();
	SetPenColor("Black");
	return;
}
void mode(int i)
{
	station = i;
	return;
}
void changes()
{
	switch (station)
	{
	case 1://登录界面
		//initUI();
		

		cancelMouseEvent();
		registerMouseEvent(enter);
		break;

	case 2://游戏
		/*InitGraphics();*/
		DrawGameArea(4);
		Drawinitial();
		Drawscore();
		SetWindowTitle("游戏可以开始玩了捏");
		registerKeyboardEvent(logic);
		
		cancelMouseEvent();//*registerKeyboardEvent(enter);*//
		gameover();
		break;
	case 3:
		//initGame();
		rank();
		break;
	case 4:
		readrank();
		
		break;
	case 5:
		//initHelp();
		InitGraphics();
		break;
	default:
		break;
	}
}


void rank()
{
	info tmp;
	FILE* fp;
	MovePen(GetWindowWidth() / 4,GetWindowHeight() / 4 * 3.0);
	SetPenSize(GetPenSize() * 8);
	DrawTextString("请输入您的用户名：(小于20字(只支持数字和字母))");
	MovePen(GetWindowWidth() / 4, GetWindowHeight() / 4 * 3.0 -GetFontHeight());
	DrawTextString("按回车键查看排名");
	MovePen(GetWindowWidth() / 4, GetWindowHeight() / 4 * 3.0 - 2*GetFontHeight());
	registerKeyboardEvent(name);	
	SetPenSize(GetPenSize() / 8);
	strcpy(tmp.name, p);
	tmp.score = score;
	fp = fopen("rank.txt", "a");
	if (fp == NULL)
	{
		printf("cannot open the files\n");
		system("pause");
		return -1;//如果文件出现错误返回-1  
	}
	fprintf(fp, "%s %d", tmp.name, tmp.score);
	fclose(fp);
	return ;
}

void readrank()
{
	info tmp[10];
	info temp;
	int n = 0, j = 0, i = 0, k = 0;
	FILE* fp;
	fp = fopen("rank.txt", "rb");
	if (fp == NULL)
	{
		printf("cannot open the files\n");
		system("pause");
		return -1;
	}
	for (i = 0; i < n - 1; i++)//采用冒泡法进行排序 
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (tmp[j].score > tmp[k].score)//排序比较大小  
				k = j;
		temp = tmp[k];
		tmp[k] = tmp[i];
		tmp[i] = temp;//当符合条件时进行数据交换
	}
	i = 0;
	MovePen(0, 0);
	SetPenColor("White");
	StartFilledRegion(1.0);
	DrawLine(0, GetWindowHeight());
	DrawLine(GetWindowHeight(),0);
	DrawLine(0, -GetWindowHeight());
	DrawLine(-GetWindowHeight(), 0);
	EndFilledRegion();
	SetPenColor("Black");
	MovePen(GetWindowWidth() / 2 - GetWindowHeight() / 3, GetWindowHeight() * 5.0 / 6);
	SetPointSize(GetPointSize() * 8);
	DrawTextString("排行榜");
	SetWindowTitle("排名");
	string *a[10];
	for (i = 0; i < 10; i++)
	{
		a[i] = (char*)malloc(sizeof(char) * 30);
	}
	SetPointSize(GetPointSize() / 8);
	i = 0;
	while (i <= 9 && fscanf(fp, "%s%d", tmp[i].name, &tmp[i].score) != EOF)
	{
		sprintf(a[i],"%3d%15s%10d\n", i+1 , tmp[i].name, tmp[i].score);
		MovePen(GetWindowWidth() / 2 - GetWindowHeight() / 3, GetWindowHeight() * 5.0 / 6 - GetPointSize()*(i+1) );
		DrawTextString(a[i]);
		i++;
	}
	fclose(fp);
	return ;
}
void name(int key,int event) {
	if (((key>=65&&key<=90)||(key>=48&&key<=57))&&event == KEY_UP)
	{
		MovePenR(0.1*length,0);
	}
	if (key == 65&&event==KEY_UP) {
		DrawTextString("A");
		strcat(p, "A");
		length++;
	}
	else if (key == 66 && event == KEY_UP) {
		DrawTextString("B");
		strcat(p, "B");
		length++;
	}
	else if (key == 67 && event == KEY_UP) {
		DrawTextString("C");
		strcat(p, "C");
		length++;
	}
	else if (key == 68 && event == KEY_UP) {
		DrawTextString("D");
		strcat(p, "D");
		length++;
	}
	else if (key == 69 && event == KEY_UP) {
		DrawTextString("E");
		strcat(p, "E");
		length++;
	}
	else if (key == 70 && event == KEY_UP) {
		DrawTextString("F");
		strcat(p, "F");
		length++;
	}
	else if (key == 71 && event == KEY_UP) {
		DrawTextString("G");
		strcat(p, "G");
		length++;
	}
	else if (key == 72 && event == KEY_UP) {
		DrawTextString("H");
		strcat(p, "H");
		length++;
	}
	else if (key == 73 && event == KEY_UP) {
		DrawTextString("I");
		strcat(p, "I");
		length++;
	}
	else if (key == 74 && event == KEY_UP) {
		DrawTextString("J");
		strcat(p, "J");
		length++;
	}
	else if (key == 75 && event == KEY_UP) {
		DrawTextString("K");
		strcat(p, "K");
		length++;
	}
	else if (key == 76 && event == KEY_UP) {
		DrawTextString("L");
		strcat(p, "L");
		length++;
	}
	else if (key == 77 && event == KEY_UP) {
		DrawTextString("M");
		strcat(p, "M");
		length++;
	}
	else if (key == 78 && event == KEY_UP) {
		DrawTextString("N");
		strcat(p, "N");
		length++;
	}
	else if (key == 79 && event == KEY_UP) {
		DrawTextString("O");
		strcat(p, "O");
		length++;
	}
	else if (key == 80 && event == KEY_UP) {
		DrawTextString("P");
		strcat(p, "P");
		length++;
	}
	else if (key == 81 && event == KEY_UP) {
		DrawTextString("Q");
		strcat(p, "Q");
		length++;
	}
	else if (key == 82 && event == KEY_UP) {
		DrawTextString("R");
		strcat(p, "R");
		length++;
	}
	else if (key == 83 && event == KEY_UP) {
		DrawTextString("S");
		strcat(p, "S");
		length++;
	}
	else if (key == 84 && event == KEY_UP) {
		DrawTextString("T");
		strcat(p, "T");
		length++;
	}
	else if (key == 85 && event == KEY_UP) {
		DrawTextString("U");
		strcat(p, "U");
		length++;
	}
	else if (key == 86 && event == KEY_UP) {
		DrawTextString("V");
		strcat(p, "V");
		length++;
	}
	else if (key == 87 && event == KEY_UP) {
		DrawTextString("W");
		strcat(p, "W");
		length++;
	}
	else if (key == 88 && event == KEY_UP) {
		DrawTextString("X");
		strcat(p, "X");
		length++;
	}
	else if (key == 89 && event == KEY_UP) {
		DrawTextString("Y");
		strcat(p, "Y");
		length++;
	}
	else if (key == 90 && event == KEY_UP) {
		DrawTextString("Z");
		strcat(p, "Z");
		length++;
	}
	else if (key == 48 && event == KEY_UP) {
		DrawTextString("0");
		strcat(p, "0");
		length++;
	}
	else if (key == 49 && event == KEY_UP) {
		DrawTextString("1");
		strcat(p, "1");
	}
	else if (key == 50 && event == KEY_UP) {
		DrawTextString("2");
		strcat(p, "2");
		length++;
	}
	else if (key == 51 && event == KEY_UP) {
		DrawTextString("3");
		strcat(p, "3");
		length++;
	}
	else if (key == 52 && event == KEY_UP) {
		DrawTextString("4");
		strcat(p, "4");
		length++;
	}
	else if (key == 53 && event == KEY_UP) {
		DrawTextString("5");
		strcat(p, "5");
		length++;
	}
	else if (key == 54 && event == KEY_UP) {
		DrawTextString("6");
		strcat(p, "6");
		length++;
	}
	else if (key == 55 && event == KEY_UP) {
		DrawTextString("7");
		strcat(p, "7");
		length++;
	}
	else if (key == 56 && event == KEY_UP) {
		DrawTextString("8");
		strcat(p, "8");
		length++;
	}
	else if (key == 57 && event == KEY_UP) {
		DrawTextString("9");
		strcat(p, "9");
		length++;
	}
	else if (key == 13 && event == KEY_UP) {
		
		mode(4);
		cancelKeyboardEvent();
	}
	else
	{
	return;
	}
	
}