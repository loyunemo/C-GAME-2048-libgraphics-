#include <game.h>
#include <random.h>
#include <graphics.h>
#include <extgraph.h>
boxset box[4][4];
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

void logic(int key)
{
	if (key == 39)/*ср*/
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (box[i][j].i)
				{
					if (box[i][j + 1].i == box[i][j].i)

					{
						box[i][j].i = 0;
						box[i][j + 1].i *= 2;
					}
					else if (box[i][j + 1].i == 0)
					{
						box[i][j + 1].i = box[i][j].i;
						box[i][j].i = 0;
					}
				}
			}
		}
	}
	else if (key == 37)/*вС*/
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 3; j > 0; j--)
			{
				if (box[i][j].i)
				{
					if (box[i][j].i == box[i][j - 1].i)
					{
						box[i][j].i = 0;
						box[i][j - 1].i *= 2;
					}
					else if (box[i][j - 1].i == 0)
					{
						box[i][j - 1].i = box[i][j].i;
						box[i][j].i = 0;
					}
				}
			}
		}
	}
	else if (key == 38)/*ио*/
	{
		for (int j = 0; j < 4; j++)
		{
			for (int i = 3; i > 0; i--)
			{
				if (box[i][j].i)
				{
					if (box[i - 1][j].i == box[i][j].i)
					{
						box[i][j].i = 0;
						box[i - 1][j].i *= 2;
					}
					else if (box[i - 1][j].i == 0)
					{
						box[i - 1][j].i = box[i][j].i;
						box[i][j].i = 0;
					}
				}
				else 

			}
		}
	}
	else if (key == 40)/*об*/
	{
		for (int j = 0; j < 4; j++)
		{
			for (int i = 0; i < 3; i++)
			{
				if (box[i][j].i)
				{
					if (box[i + 1][j].i == box[i][j].i)
					{
						box[i][j].i = 0;
						box[i + 1][j].i *= 2;
					}
					else if (box[i + 1][j].i == 0)
					{
						box[i + 1][j].i = box[i][j].i;
						box[i][j].i = 0;
					}
				}
			}
		}
	}
	else
		return;
	boxcreate();
	Drawinitial();
}
void boxcreate()
{
	int i, j;
	i = RandomInteger(0, 3);
	j = RandomInteger(0, 3);
	while (box[i][j].i != 0)
	{
		i = RandomInteger(0, 3);
		j = RandomInteger(0, 3);
	}
	box[i][j].i = 2;
}