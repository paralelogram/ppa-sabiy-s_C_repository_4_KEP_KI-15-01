#include <stdio.h>
#include <math.h>

float FromBegin(float x, float y);
float FromBegin(float x, float y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}
int main() {
	int n ;
	float x, y, minX, minY;
	printf("n= "); scanf("%d",&n);
	printf("x y = "); scanf("%f %f", &minX, &minY);
	for(int i = 1; i < n; i++) {
		printf("x y = "); scanf("%f %f", &x, &y);
		if(FromBegin(x, y) < FromBegin(minX, minY)) {
			minX = x;
			minY = y;
		}
	}
	printf("minX, minY = %f, %f", minX, minY);
	return 0;
}
