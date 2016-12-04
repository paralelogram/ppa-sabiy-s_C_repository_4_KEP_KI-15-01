#include <stdio.h>
#include <math.h>

float max(float x, float y);
float max(float x, float y) {
	if (x < y) {
		return y;
	}
	if (y < x) {
		return x;
	}
}
int main(void) {
	float a, b, c, k;
	printf("a="); scanf("%f",&a);
	printf("b="); scanf("%f",&b);
	printf("c="); scanf("%f",&c);
	k=b/c*pow(max(pow(a,3),b),5)+pow(c,2)*sqrt(max(a+c,b));
	printf("k= %f\n",k );
	return 0;
}
