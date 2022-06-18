#ifndef _UI_h
#define _UI_h
// !_UI_h

#include "extgraph.h"
#include <math.h>
#include "random.h"
#include "simpio.h"
#include <string.h>
#include "strlib.h"
#include "gcalloc.h"
#include "graphics.h"
#include "fundamental.h"
typedef struct inf
{
	char name[20];
	int score;
}info;
void change(int x, int y, int button, int event);
void initUI();

void settings();
void ranking();
static void startGame();
void enter(int x,int y,int button, int event);
void menufontarea();
void mode(int i);
void changes();
void rank();
void readrank();
void name(int key, int event);
#endif 