#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int m, n, h= 0.75, g=-1.5;
	float l, k;
	int M1[20], M2[20];
	printf("k = " ); scanf("%f",&k);
	printf("l = "); scanf("%f",&l);

	for (int i = 0 ; i < 20; i++){
		k+=h;
		l+=g;
		M1[i] = ceil((l+2*k)/7);
		M2[i] = rand() % 20;
		if(M1[i] > 10 && M1[i] < 20){
			n++;
		}
		if (M2[i] > 10 && M2[i] < 20) {
			n++;
		}

	}
	int M3[n];
	for (int i = 0, j= 0;  j < n; j++){
		if (M1[j] > 10 && M1[j] < 20){
			M3[i++] = M1[j];

		}
		else if (M2[j] > 10 && M2[j] < 20){
			M3[i++] = M2[j];
		}
	}
	printf("M1\t\t M2\t\t M3 \n");
	for (int i = 0; i < 20; i++) {
	printf("M1 %i\t M2 %i\t M3 %i \n",M1[i], M2[i], M3[i]);
	}
	for (int i = 0; i < n; i++){
		printf("M3 %i\n",M3[i] );
	}
	return 0;
}
