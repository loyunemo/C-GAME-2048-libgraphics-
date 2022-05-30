#ifndef _UI_h
#define _UI_h
// !_UI_h

#include "extgraph.h"
#include <math.h>
#include "random.h"
#include "simpio.h"
#include "strlib.h"
#include "gcalloc.h"
#include "graphics.h"
void initUI();
static void menu();
void settings();
void ranking();
void startGame();
void enter(int x,int y,int button, int event);

#endif 