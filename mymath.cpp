#include "mymath.h"
#include "math.h"

double mymath::Sin[360];
int mymath::i;
mymath::mymath(){
	for (i = 0; i < 360; ++i)
	{
		Sin[i]=sin(i*M_PI/180);
	}
}
    
double mymath::mysin(int x){
	x%=360;
	return Sin[x];
}

double mymath::mycos(int x){
	x=(x+90)%360;
	return Sin[x];
}