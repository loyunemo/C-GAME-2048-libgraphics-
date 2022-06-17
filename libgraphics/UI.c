#include "UI.h"
#include <game.h>
#include <fundamental.h>
#include <map.h>
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
	/*if (sy> (GetWindowHeight() - 0.2) && sx < (windowSize[0] / 12))
	{
		RefreshWindow();
		SetPenColor("Green");
		MovePen(0, GetWindowHeight());
		StartFilledRegion(1.0);
		DrawLine(windowSize[0] / 12, 0);
		DrawLine(0, -0.3);
		DrawLine(-windowSize[0] / 12, 0);
		DrawLine(0, 0.3);
		EndFilledRegion();
		SetPenColor("Black");
		MovePen(0.01, GetWindowHeight() - 0.2);
		DrawTextString("菜单");
		settings();
		if (button == LEFT_BUTTON && event == BUTTON_DOWN)
		{
			statecheck++;
			if (statecheck % 2 == 1)
			{
				RefreshWindow();
				MovePen(0, GetWindowHeight()-0.3);
				SetPenColor("White");
				StartFilledRegion(1.0);
				DrawLine(windowSize[0] / 8, 0);
				DrawLine(0, -windowSize[1] / 4);
				DrawLine(-windowSize[0] / 8, 0);
				DrawLine(0, windowSize[1] / 4);
				EndFilledRegion();
				SetPenSize(GetPenSize() * 2);
				SetPenColor("Black");
				DrawLine(windowSize[0] / 8, 0);
				DrawLine(0, -windowSize[1] / 4);
				DrawLine(-windowSize[0] / 8, 0);
				DrawLine(0, windowSize[1] / 4);
				SetPenSize(GetPenSize() / 2);
				settings();
				mode(2);
			}
			else
			{
				RefreshWindow();
				MovePen(0, GetWindowHeight()-0.3);
				SetPenColor("White");
				StartFilledRegion(1.0);
				DrawLine(windowSize[0] / 8+0.1, 0);
				DrawLine(0, -windowSize[1] / 4-0.1);
				DrawLine(-windowSize[0] / 8-0.1, 0);
				DrawLine(0, windowSize[1] / 4+0.1);
				EndFilledRegion();
				MovePen(0.01, GetWindowHeight() - 0.2);
				SetPenColor("Black");
				DrawTextString("菜单");
				SetPenColor("White");
				settings();
				mode(2);
			}
			
		}
		

	}*/
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
		InitGraphics();
		
		DrawGameArea(4);
		Drawinitial();
		registerKeyboardEvent(logic);
		cancelMouseEvent();//*registerKeyboardEvent(enter);*//
		gameover();
		break;
	case 3:
		//initGame();
		InitGraphics();
		
		break;
	case 4:
		//initRanking();
		//*registerKeyboardEvent(enter);*//
		InitGraphics();
		break;
	case 5:
		//initHelp();
		InitGraphics();
		break;
	default:
		break;
	}
}