#include<stdio.h>
#include <math.h>

int main() {
	double x =-2, y , dx=0.15;
	int   n ;
	for (n=0; n<=6; n++) {
		y=2*pow(sin(x),3)/(3*abs(x)+1);
		printf("y = \a%d, x = %f\n",y,x );
		x+=dx;
	}
	return 0;
}
