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

#include "include/fundamental.h"
#include <math.h>
#include "include/UI.h"
#include "include/game.h"

extern int station;
void Main()
{
	InitGraphics();
	SetWindowTitle("2048");
	initUI();
	statisticload(4);
	initialSquare();
	MovePen(GetWindowHeight() * 3.0 / 4, GetWindowHeight() * 3.0 / 4);
	/*boxarea();*/
	registerOnPaintEvent(changes);
	
		/*registerKeyboardEvent();*/
		
	
}


