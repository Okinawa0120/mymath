#ifndef mymath_h
#define mymath_h
#include "math.h"

class mymath
{
public:
	mymath();
	double mysin(int x);
	double mycos(int x);
private:
	static double Sin[360];
	static int i;
};
#endif