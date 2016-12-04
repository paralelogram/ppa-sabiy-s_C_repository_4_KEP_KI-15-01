#include <stdio.h>
#include <math.h>

int main(void) {
	float a, l, k, b, c, MAXa, MAXb, MAXc,  kints, krok;
	MAXa=-80;
	MAXb=-90;
	MAXc=-30;
	printf("input kints "); scanf("%f",&kints);
	printf("input krok "); scanf("%f",&krok);
	for (l = 1; l <= kints; l += krok) {
		printf("l = %f ", l);
		for (k = 3; k <= kints; k += krok) {
			printf("k = %f \t\n", k);
			a = (l + k) / 5;
			b = l * k - 15;
			c = (k-2*l)/l;
			if (MAXa<a )
				MAXa=a;
			if ( MAXb<b)
				MAXb=b;
			if (MAXc<c)
				MAXc=c;
			printf("MAXa=%f \t MAXb=%f \t MAXc=%f \t\n", MAXa, MAXb, MAXc);
		}
		printf("a= %f \nb= %f \nc= %f \n\a", a, b, c );
	}
	return 0;
}
