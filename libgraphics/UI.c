#include "UI.h"
static int statecheck=0;
void initUI()
{
	
	InitGraphics();
	menu();
	settings();
	ranking();
	startGame();
}
 static void menu()
{
	MovePen(0.01, GetWindowHeight() - 0.2);
	DrawTextString("²Ëµ¥");
	
}
void settings()
{
	return;
}
void ranking()
{
	return;
}
void startGame()
{
	return;
}

void enter(int x,int y,int button, int event )
{
	 
	double windowSize[2] = { GetWindowWidth(), GetWindowHeight() };
	double center[2] = { windowSize[0] / 2, windowSize[1] / 2 };
	if (y > (GetWindowHeight() - 0.3) && x < (windowSize[0] / 12))
	{
		RefreshWindow();
		SetPenColor("GREEN");
		MovePen(0, GetWindowHeight());
		StartFilledRegion(1.0);
		DrawLine(windowSize[0] / 12, 0);
		DrawLine(0, -0.3);
		DrawLine(-windowSize[0] / 12, 0);
		DrawLine(0, 0.3);
		EndFilledRegion();
		SetPenColor("BLACK");
		DrawTextString("²Ëµ¥");
	}
		if (button == LEFT_BUTTON && event == BUTTON_DOWN)
		{
			statecheck++;
			if (statecheck % 2 == 1)
			{
				RefreshWindow();
				MovePen(0, GetWindowHeight()-0.3);
				SetPenColor("WHITE");
				StartFilledRegion(1.0);
				DrawLine(windowSize[0] / 8, 0);
				DrawLine(0, -windowSize[1] / 4);
				DrawLine(-windowSize[0] / 8, 0);
				DrawLine(0, windowSize[1] / 4);
				EndFilledRegion();
				SetPenSize(GetPenSize() * 2);
				SetPenColor("BLACK");
				DrawLine(windowSize[0] / 8, 0);
				DrawLine(0, -windowSize[1] / 4);
				DrawLine(-windowSize[0] / 8, 0);
				DrawLine(0, windowSize[1] / 4);
				SetPenSize(GetPenSize() / 2);
			}
			else
			{
				RefreshWindow();
				MovePen(0, GetWindowHeight()-0.3);
				SetPenColor("WHITE");
				StartFilledRegion(1.0);
				DrawLine(windowSize[0] / 8+0.1, 0);
				DrawLine(0, -windowSize[1] / 4-0.1);
				DrawLine(-windowSize[0] / 8-0.1, 0);
				DrawLine(0, windowSize[1] / 4+0.1);
				EndFilledRegion();
				MovePen(0.01, GetWindowHeight() - 0.2);
				SetPenColor("BLACK");
				DrawTextString("²Ëµ¥");
				SetPenColor("WHITE");
				
			}
			
		}
	
}