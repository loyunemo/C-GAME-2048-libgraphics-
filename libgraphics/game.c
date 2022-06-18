#include <game.h>
#include <random.h>
#include <graphics.h>
#include <extgraph.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<UI.h>
boxset box[4][4];
int score;
int judge;
double getboxx(int q)
{
	double x;
	x = GetWindowWidth()/2 - GetWindowHeight() / 4 + GetWindowHeight() / 6.0 * q;
	return x;
}
double getboxy(int k)
{
	double y;
	y = 3.0*GetWindowHeight() / 4 - GetWindowHeight() / 6.0 * k;
	return y;
}
void statisticload(int length)
{
	int k, q;
	for (k = 0; k < length; k++)
	{
		for (q = 0; q < length; q++)
		{
			box[k][q].i = 0;
			box[k][q].number = k * 4 + q + 1;
			box[k][q].x = getboxx(q);
			box[k][q].y = getboxy(k);

		}
	}
	
	return;
}
void DrawGameArea(int length)
{
	for (int k = 0; k < length; k++)
	{
		for (int q = 0; q < length; q++)
		{
			DrawSquare(k, q);

		}

	}
}
void DrawSquare(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Light Gray");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0,-GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6,0);
}
void DrawSquare2(int k, int q) 
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Yellow Gray");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("2");
}
void DrawSquare4(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Yellow");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("4");
}
void DrawSquare8(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Dougello");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("8");
}
void DrawSquare16(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Tomato");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("16");
}
void DrawSquare32(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Orange");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("32");
}
void DrawSquare64(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Golden");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("64");
}
void DrawSquare128(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Sky Blue");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("128"); 
}
void DrawSquare256(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Grass Green");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("256"); 
}
void DrawSquare512(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Green");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("512");
}
void DrawSquare1024(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Pured");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("1024");
}
void DrawSquare2048(int k, int q)
{
	MovePen(box[k][q].x, box[k][q].y);
	MovePenR(-GetWindowHeight() / 12.0, GetWindowHeight() / 12.0);
	SetPenColor("Red");
	StartFilledRegion(1.0);
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	EndFilledRegion();
	SetPenColor("Black");
	DrawLine(GetWindowHeight() / 6, 0);
	DrawLine(0, -GetWindowHeight() / 6);
	DrawLine(-GetWindowHeight() / 6, 0);
	DrawLine(0, GetWindowHeight() / 6);
	MovePenR(GetWindowHeight() / 6, 0);
	MovePen(box[k][q].x, box[k][q].y);
	DrawTextString("2048");
}
void initialSquare()
{
	int a, b,c,d;

	Randomize();
	a = RandomInteger(0,3);
	b = RandomInteger(0,3);
	c = RandomInteger(0,3);
	d = RandomInteger(0,3);
	while (c == a&&d==b)
		{
			c = RandomInteger(0, 3);
			d = RandomInteger(0, 3);
		}
	box[a][b].i = 2;
	box[c][d].i = 2;
	
	return;
}
void Drawinitial()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <4; j++)
		{
			switch (box[i][j].i)
			{	case 2:
					DrawSquare2(i, j);
					break;
				case 4:
					DrawSquare4(i, j);
					break;
				case 8:
					DrawSquare8(i, j);
					break;
				case 16:
					DrawSquare16(i, j);
					break;
				case 32:
					DrawSquare32(i, j);
					break;
				case 64:
					DrawSquare64(i, j);
					break;
				case 128:
					DrawSquare128(i, j);
					break;
				case 256:
					DrawSquare256(i, j);
					break;
				case 512:
					DrawSquare512(i, j);
					break;
				case 1024:
					DrawSquare1024(i, j);
					break;
				case 2048:
					DrawSquare2048(i, j);
					break;
				default:
				break;
			}
			
		}
	}
}

void logic(int key,int event)
{
	judge = 0;
	{if (key == 39&&event==KEY_UP)/*��*/
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j=3;j>=0; j--)/*ȥ��0*/
			{
				for (int k = j; k < 3; k++)
				{
					if (box[i][k + 1].i == 0)
					{
						if(box[i][k].i!=0)
						{
							judge = 1;
						}
						box[i][k + 1].i = box[i][k].i;
						box[i][k].i = 0;
					}
					
				}

			}
			
			for (int j = 3; j >= 1; j--)
			{
				if (box[i][j].i == box[i][j - 1].i)
				{
					if (box[i][j].i != 0)
					{
						judge = 1;
					}
					box[i][j].i *= 2;
					score += box[i][j].i;
					box[i][j - 1].i = 0;
					
				}
			}
			for (int j = 3; j >= 0; j--)/*ȥ��0*/
			{
				for (int k = j; k < 3; k++)
				{
					if (box[i][k + 1].i == 0)
					{
						box[i][k + 1].i = box[i][k].i;
						box[i][k].i = 0;
					}

				}

			}
		}
		
		
	}
	else if (key == 37 && event == KEY_UP)/*��*/
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j <= 3; j++)/*ȥ��0*/
			{
				for (int k = j; k > 0; k--)
				{
					if (box[i][k - 1].i == 0)
					{
						if (box[i][k].i != 0)
						{
							judge = 1;
						}
						box[i][k - 1].i = box[i][k].i;
						box[i][k].i = 0;
						
					}

				}
			}
			for (int j = 0; j < 3; j++)
			{
					if (box[i][j].i == box[i][j + 1].i)
					{
						if (box[i][j].i != 0)
						{
							judge = 1;
						}
						box[i][j].i *= 2;
						box[i][j + 1].i = 0;
						score += box[i][j].i;
					}
				
				}
			for (int j = 0; j <= 3; j++)/*ȥ��0*/
			{
				for (int k = j; k > 0; k--)
				{
					if (box[i][k - 1].i == 0)
					{
					box[i][k - 1].i = box[i][k].i;
					box[i][k].i = 0;
					}

				}
			}

	}

	}
	else if (key == 40 && event == KEY_UP)/*��*/
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 3; j >= 0; j--)/*ȥ��0*/
			{
				for (int k = j; k < 3; k++)
				{
					if (box[k+1][i].i == 0)
					{
						if (box[k][i].i != 0)
						{
							judge = 1;
						}
						box[k + 1][i].i = box[k][i].i;
						box[k][i].i = 0;
						
					}

				}

			}

			for (int j = 3; j >= 1; j--)
			{
				if (box[j][i].i == box[j-1][i].i)
				{
					if (box[j][i].i != 0)
					{
						judge = 1;
					}
					box[j][i].i *= 2;
					box[j-1][i].i = 0;
					score += box[j][i].i;
				}
			}
			for (int j = 3; j >= 0; j--)/*ȥ��0*/
			{
				for (int k = j; k < 3; k++)
				{
					if (box[k+1][i].i == 0)
					{
						box[k+1][i].i = box[k][i].i;
						box[k][i].i = 0;
					}

				}

			}
		}


	}
	else if (key == 38 && event == KEY_UP)/*��*/
	{
		
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j <= 3; j++)/*ȥ��0*/
				{
					for (int k = j; k > 0; k--)
					{
						if (box[k-1][i].i == 0)
						{
							if (box[k][i].i != 0)
							{
								judge = 1;
							}
							box[k-1][i].i = box[k][i].i;
							box[k][i].i = 0;
					
						}

					}
				}
				for (int j = 0; j < 3; j++)
				{
					if (box[j][i].i == box[j+1][i].i)
					{
						if (box[j][i].i != 0)
						{
							judge = 1;
						}
						box[j][i].i *= 2;
						box[j+1][i].i = 0;
						score += box[j][i].i;
					}

				}
				for (int j = 0; j <= 3; j++)/*ȥ��0*/
				{
					for (int k = j; k > 0; k--)
					{
						if (box[k-1][i].i == 0)
						{
							box[k-1][i].i = box[k][i].i;
							box[k][i].i = 0;
						}

					}
				}
			}
	}
	else
		return; }
	if (judge == 1)
	{
		boxcreate();
	}
	judge = 0;
	Drawinitial();
	Drawscore();
}
void boxcreate()
{
	Randomize();
	int i, j;
	int randomx;
	i = RandomInteger(0, 3);
	j = RandomInteger(0, 3);
	while (box[i][j].i != 0)
	{
		i = RandomInteger(0, 3);
		j = RandomInteger(0, 3);
	}
	randomx=((RandomChance(0.5)) ? 2 : 4);
	box[i][j].i = randomx;
	return;
}
void gameover()
{
	int judgeg;
	judgeg = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (box[i][j].i == 0)
				judgeg = 1;

		}

	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (box[i][j].i == box[i][j + 1].i)
				judgeg = 1;

		}
		
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (box[j+1][i].i == box[j][i].i)
				judgeg = 1;

		}

	}
	if (!judgeg)
	{
		
		mode(3);
		statisticload(4);
		Sleep(1000);
		MovePen(0, 0);
		SetPenColor("White");
		StartFilledRegion(1);
		DrawLine(0, GetWindowHeight());
		DrawLine(GetWindowWidth(), 0);
		DrawLine(0, -GetWindowHeight());
		DrawLine(-GetWindowWidth(), 0);
		EndFilledRegion();
		DrawTextString("GAMEOVER!");
		SetPenColor("Black");
		cancelKeyboardEvent();
		/*initUI();*/
	}
	return;
}

