#include <stdio.h>
#include <math.h>

int main(void) {
	int x,  a, n=0;
	double y=1;
	for( x=10; x<=50; x++){
		if (x%2==0) {
		n++;
		y *= x;
		printf("x(%d) = %d \n", n, x);
		}
	}
	printf(" sered geom =%f \n", pow(y,1.0/n) );
return 0;
}
