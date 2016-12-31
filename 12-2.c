#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int  main(){
int i,j,n=0,m[MAX],t, sum;
FILE *f;
char fname[] = "list_of_pensioners.txt", s[MAX], res;
if((f=fopen(fname,"r+"))==NULL){
	printf("Error 404: File %s not found",fname);
	exit(1);
}
fgets(s,MAX,f);
printf("%s\n",s);
while(res=fread(&s,1,sizeof(s),f)){
	for(i = 0; i < res-1; i++){
		//if(s[i]='x'){
			printf("loh\n" );
		//}
}
	printf("sum = %s\n",res );
}
fclose(f);
return 0;
}
