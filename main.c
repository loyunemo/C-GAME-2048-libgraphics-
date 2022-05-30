/*
 * File: main.c
 * -------------
 * This program verify the basic function of libgraphics
 */

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
#include "UI.h"
#include <math.h>
extern statecheck;
void Main()
{
	initUI();
	registerMouseEvent(enter);
}
