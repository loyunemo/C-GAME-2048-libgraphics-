#include <game.h>
double getboxx(int k)
{
	double x;
	x = GetWindowHeight() / 4 + GetWindowHeight() / 6.0 * k;
	return x;
}
double getboxy(int q)
{
	double y;
	y = 3.0*GetWindowHeight() / 4 - GetWindowHeight() / 12.0 * q;
	return y;
}