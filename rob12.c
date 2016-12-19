#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#define MAXSTR 75
int main(){
  int i = 0 , n, max, lengsS3, lengsS2, lengsS1;
  char S1[MAXSTR], S2[MAXSTR], S3[MAXSTR];
  max = i;
  printf("S1 = \n(S1 < 75)\n");
  fgets(S1, MAXSTR, stdin);
  strlen(S1);
  printf("S2 = \n(S2 < 75)\n");
  fgets(S2, MAXSTR, stdin);
  strlen(S2);
  printf("S2 = \n(S2 < 75)\n");
  fgets(S3, MAXSTR, stdin);
  strlen(S3);
  if (strlen(S1) > strlen(S2) && strlen(S1) > strlen(S3)) {
    printf("S1 has maximum leigth = %i\n",strlen(S1));
    atoi(S1);

  }
  else if(strlen(S2) > strlen(S1) && strlen(S2) > strlen(S3)){
    printf("S2 has maximum leight  = %i\n",strlen(S2));
    atoi(S2);
  }
  else if(strlen(S3) > strlen(S1) && strlen(S3) > strlen(S2)){
    printf("S3 has maximum leight  = %i\n",strlen(S3));
    atoi(S3);
  }
  return 0;
}
