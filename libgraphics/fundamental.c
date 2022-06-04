#include "fundamental.h"
#include "UI.h"
#include <string.h>
#include <graphics.h>
#include <extgraph.h>
void DrawBox()/*画登录按钮的*/
{
	string store;
	RefreshWindow();
	MovePen(GetWindowWidth() / 2, GetWindowHeight() / 2);
	MovePenR(-GetWindowWidth() / 6, GetWindowHeight() / 14);
	store = GetPenColor();
	SetPenColor("Yellow");
	StartFilledRegion(1.0);
	DrawLine(GetWindowWidth() / 3, 0);
	DrawLine(0, -GetWindowHeight() / 7);
	DrawLine(-GetWindowWidth() / 3, 0);
	DrawLine(0, GetWindowHeight() / 7);
	EndFilledRegion();
	SetPenColor("Black");
	MovePen(GetWindowWidth() / 2 -0.34, GetWindowHeight() / 2-0.05);
	DrawTextString("开始游戏");
	SetPenColor(store);
}
void DrawBoxdown()/*画登录按钮的*/
{
	string store;
	RefreshWindow();
	MovePen(GetWindowWidth() / 2, GetWindowHeight() / 2);
	MovePenR(-GetWindowWidth() / 6, GetWindowHeight() / 14);
	store = GetPenColor();
	SetPenColor("Gray");
	StartFilledRegion(1.0);
	DrawLine(GetWindowWidth() / 3, 0);
	DrawLine(0, -GetWindowHeight() / 7);
	DrawLine(-GetWindowWidth() / 3, 0);
	DrawLine(0, GetWindowHeight() / 7);
	EndFilledRegion();
	SetPenColor("Black");
	MovePen(GetWindowWidth() / 2 - 0.34, GetWindowHeight() / 2 - 0.05);
	DrawTextString("开始游戏");
	SetPenColor(store);
}
void DrawBoxon()/*画登录按钮的*/
{
	string store;
	RefreshWindow();
	MovePen(GetWindowWidth() / 2, GetWindowHeight() / 2);
	MovePenR(-GetWindowWidth() / 6, GetWindowHeight() / 14);
	store = GetPenColor();
	SetPenColor("Light Gray");
	StartFilledRegion(1.0);
	DrawLine(GetWindowWidth() / 3, 0);
	DrawLine(0, -GetWindowHeight() / 7);
	DrawLine(-GetWindowWidth() / 3, 0);
	DrawLine(0, GetWindowHeight() / 7);
	EndFilledRegion();
	SetPenColor("Black");
	MovePen(GetWindowWidth() / 2 - 0.34, GetWindowHeight() / 2 - 0.05);
	DrawTextString("开始游戏");
	SetPenColor(store);
}
void MovePenR(double dx,double dy)
{
	double sx,sy;
	sx = GetCurrentX();
	sy = GetCurrentY();
	MovePen(sx + dx, sy + dy);
	return;
}
void boxarea()
{
	MovePenR(-GetWindowHeight() / 12, -GetWindowHeight() / 12);
	DrawLine(0.0, GetWindowHeight() / 6);
	DrawLine( GetWindowHeight() / 6,0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	MovePenR(0.05, 0.05);
	StartFilledRegion(1.0);
	
	DrawLine(0, GetWindowHeight() / 6-0.1);
	DrawLine(GetWindowHeight() / 6-0.1, 0);
	DrawLine( GetWindowHeight() / 6,0);
	DrawLine(0, -GetWindowHeight() / 6+0.1);
	DrawLine(-GetWindowHeight() / 6+0.1, 0);
	EndFilledRegion();
	SetPenColor("Light Gray");
	
}
void Draw2()
{
	SetPenSize(GetPenSize() * 8);
	SetPenColor("Green");
	DrawLine(GetWindowWidth() / 14 - 0.2, 0);
	DrawLine(0, -GetWindowWidth() / 12 + 0.1);
	DrawLine(-GetWindowWidth() / 14 + 0.2, 0);
	DrawLine(0, -GetWindowWidth() / 12 + 0.1);
	DrawLine(GetWindowWidth() / 14 - 0.2, 0);
	SetPenSize(GetPenSize() / 8);
	MovePenR(0.2, 2 * GetWindowWidth() / 12 - 0.2);
}
void Draw0()
{
	SetPenSize(GetPenSize() * 8);
	SetPenColor("Green");
	DrawLine(GetWindowWidth() / 14 - 0.2, 0);
	DrawLine(0, -  GetWindowWidth() / 6 + 0.2);
	DrawLine(-GetWindowWidth() / 14 + 0.2, 0);
	DrawLine(0,  GetWindowWidth() / 6 - 0.2);
	SetPenSize(GetPenSize() / 8);
	MovePenR(GetWindowWidth() / 14,0);
}
void Draw4()
{
	SetPenSize(GetPenSize() * 8);
	SetPenColor("Green");
	DrawLine(0, -GetWindowWidth() / 12 + 0.1);
	DrawLine(GetWindowWidth() / 14 - 0.2, 0);
	MovePenR(0, -GetWindowWidth() / 12 + 0.1);
	DrawLine(0, GetWindowWidth() / 6 - 0.2);
	SetPenSize(GetPenSize() / 8);
}

void Draw8()
{
	SetPenSize(GetPenSize() * 8);
	SetPenColor("Green");
	DrawLine(GetWindowWidth() / 14 - 0.2, 0);
	DrawLine(0, -GetWindowWidth() / 6 + 0.2);
	DrawLine(-GetWindowWidth() / 14 + 0.2, 0);
	DrawLine(0, GetWindowWidth() / 6 - 0.2);
	MovePenR(0, -GetWindowWidth() / 12 + 0.1);
	DrawLine(GetWindowWidth() / 14 - 0.2, 0);
	SetPenSize(GetPenSize() / 8);
	MovePenR(GetWindowWidth() / 14, 0);
	MovePen(0, 0);
}
	