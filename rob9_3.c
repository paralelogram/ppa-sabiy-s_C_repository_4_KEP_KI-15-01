#include <stdio.h>
#define ROWS 10
#define COLS 10

int main(){
	float matrix[ROWS][COLS], MIN;
	int i, j, n, m, k;
	printf("n = "); scanf("%i",&n);
	printf("m = "); scanf("%i",&m);
	MIN = 50;
	for (i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			printf("matrix[%i][%i]", i, j); scanf("%f",&matrix[i][j]);
			if(matrix[i][j] < MIN){
				MIN = matrix[i][j];
			}
		}
	}
	printf("MIN = %f\n", MIN);
	printf("sourse matrix\n");
	for (i = 0; i < n; i++){
		for (j= 0; j < m; j++){
			printf("%5.0f",matrix[i][j]); printf("\n");
		}
	}
	for(k = 0; k <= m; k++)
		matrix[0][k]=MIN;
	printf("new matrix\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%5.0f",matrix[i][j]); printf("\n");
		}
	}
	return 0;
}
