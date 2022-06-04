/*
 * File: main.c
 * -------------
 * This program verify the basic function of libgraphics
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "graphics.h"
#include "genlib.h"
#include "conio.h"
#include <windows.h>
#include <olectl.h>
#include <stdio.h>
#include <mmsystem.h>
#include <wingdi.h>
#include <ole2.h>
#include <ocidl.h>
#include <winuser.h>
#include "include/map.h"
#include "include/fundamental.h"
#include <math.h>
#include "include/UI.h"
#include "include/game.h"

extern int station;
void Main()
{
	InitGraphics();
	initUI(); 
	MovePen(GetWindowHeight() * 3.0 / 4, GetWindowHeight() * 3.0 / 4);
	/*boxarea();*/
	registerOnPaintEvent(changes);
	
		/*registerKeyboardEvent();*/
		
	
}
/*void statisticload(int length)
{
	int k, q;
	for (k = 0; k < length;k++)
	{
		for (q = 0; q < length; q++)
		{
			box [k] [q] .i = 0;
			box [k] [q] .number = k * 4 + q + 1;
			box [k] [q] .x = getboxx(k);
			box [k] [q] .y = getboxy(q);

		}
	}
	return;
}
void changes()
{
	switch (station)
	{
	case 1:
		//initUI();
		registerMouseEvent(enter);
		break;

	case 2:
		//initLogin();
		registerKeyboardEvent(enter);
		break;
	case 3:
		//initGame();
		break;
	case 4:
		//initRanking();
		registerKeyboardEvent(enter);
		break;
	case 5:
		//initHelp();
		break;
	default:
		break;
	}
}*/
