#include <stdio.h>
#include <math.h>
#define ROWS 10
#define COLS 10

int main(){
	float matrix[ROWS][COLS], s, sa;
	unsigned int i, j, n, k;
	printf("n="); scanf("%i",&n);
	for(i = 0; i < n; i++){
		for( j = 0; j < n; j++ ){
			printf("m[%i][%i]= ", i, j);
			scanf("%f",&matrix[i][j]);
			if( j < i){
				s+=matrix[i][j];
				k++;
			}
		}

	}
	sa=s/k;
	printf("sa= %f\n sum=%f\n", sa, s);
	return 0;

}
