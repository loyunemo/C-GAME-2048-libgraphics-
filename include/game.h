#ifndef _game_h
#define _game_h
#include "extgraph.h"
#include <math.h>
#include "random.h"
#include "simpio.h"
#include "strlib.h"
#include "gcalloc.h"
#include "graphics.h"
#include "fundamental.h"
#include <stdlib.h>
#include <UI.h>
typedef struct
{
	int i;
	int number;
	double x;
	double y;

}boxset;
double getboxx(int k);
double getboxy(int q);
void statisticload(int length);
void DrawGameArea(int length);
void DrawSquare(int k, int q);
void DrawSquare2(int k, int q);
void DrawSquare4(int k, int q);
void DrawSquare8(int k, int q);
void DrawSquare16(int k, int q);
void DrawSquare32(int k, int q);
void DrawSquare64(int k, int q);
void DrawSquare128(int k, int q);
void DrawSquare256(int k, int q);
void DrawSquare512(int k, int q);
void DrawSquare1024(int k, int q);
void Drawinitial();
void logic(int key);
#endif // !_game_h

