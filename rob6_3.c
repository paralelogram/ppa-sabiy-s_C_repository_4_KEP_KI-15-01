#include<stdio.h>
#include <math.h>

int main() {
	float z=1, s=0, l = 11, m = 2;
	for( float m = 2; m <= 19; m++){
		s += pow(-1, m) * ((2 * m + 3) * (m + 2)/(pow(m , 2) + 2));
	}
	for( float k = m ; k <= l; k++ ){
		z *= k + 1 / ((k + 8) * (k + 6));
	}
	printf("sum = %f \t", s);
	printf("product = %f \n", z);

	return 0;
}
