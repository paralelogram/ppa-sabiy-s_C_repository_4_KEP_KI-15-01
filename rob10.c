#include <stdio.h>
#define MAX 11
int main(){
  int M1[MAX], M2[MAX];
  int t, n;
  for( int i = 0; i < 10; i++){
    printf("M1[%i]",i); scanf("%i",&M1[i]);
    if(M1[i]<0){
      n++;
    }
  }
  for(int i = 0; i < 10; i++){
    printf("M2[%i]", i); scanf("%i",&M2[i]);
    if(M2[i]>0){
      n++;
    }
  }
  int M3[n];
  for(int i = 0, j = 0; i < n;  j++){
    if(M1[j] < 0 ){
      M3[i++] = M1[j];
    }
    if(M2[j] > 0){
      M3[i++]=M2[j];
    }
  }
  for( int i = 0; i < 20; i++){
  printf("M3[%i] = %i\n",i, M3[i] );
  }
  for(int i = 0; i < n; i++) {
    for(int j=i+1; j < n; j++) {
        if(M3[j + 1] > M3[j]) {
            t = M3[i];
            M3[i] = M3[j];
            M3[j] = t;
            }
    }
	}
	for (int i = 0; i < 20; i++) {
		printf("M3[%i] = %i\n ", i, M3[i]);
  }
return 0;
}
