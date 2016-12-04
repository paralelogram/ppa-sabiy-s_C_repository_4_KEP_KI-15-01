#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 20

int main() {
	int m;
	float l, M1[20], M2[20], M3[MAX], k;
	printf("k = " ); scanf("%f",&k);
	printf("l = "); scanf("%f",&l);
	for (int i = 0 ; i<20; i++, k+=0.75, l+=(-1.5)){
		M1[i] = ceil((l+2*k)/7);
		M2[i] = rand() % 20;
	}
	for (int i = 0, j= 0; i < 20, j < 20; j++){
		if (M1[j] < 10 && M1[j] > 20){
			M3[i] = M1[j];
			i++;
		}
		else if (M2[j] < 10 && M2[j] > 20){
			M3[i] = M2[j];
			i++;
		}
	}
	printf("M1\t M2\t M3 \n");
	for (int i = 0; i < 20; i++) {

	printf("%f\t %f\t %f\n",M1[i], M2[i], M3[i] );
	}
	return 0;
}
