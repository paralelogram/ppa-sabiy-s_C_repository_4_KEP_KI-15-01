
#include <stdio.h>
#include <math.h>
#define MAX 20

int main() {
	float a[MAX], maxD, minD;
	int n = 20, i;
	for (i = 0; i < n ; i++){
		maxD = a[0];
		minD = a[0];
		printf("a[%i]", i);
		scanf("%f",&a[i]);
		if (maxD < i) {
			maxD = a[i];
		}
		if (minD > i) {
			minD = a[i];

		}
	}
	printf("sum of elements in a pow = %f\t", pow(minD, 2)+pow(maxD, 2));
	return 0;
}
