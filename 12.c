#include <stdio.h>
#include <stdlib.h>

int main() {
	struct tov{
	char name[25], department[20], post[20];
  float exp1, salary, datebrth;
  };

   struct tov x;
   FILE *f;

   if( (f = fopen("C:\\users\\sabiy\\Desktop\\list.txt","wb")) == NULL ){
     printf("Error 404: file %s not found\n",f);
     return EXIT_FAILURE;
   }

   puts("Enter information about workers \n");
    for(int i = 1; i<=2; i++){
      printf("Name of #%i worker:\n",i ); scanf("%s",&x.name);
      puts("The department: "); scanf("%s",&x.department);
      puts("datebrth: "); scanf("%f",&x.datebrth);
      puts("experience: "); scanf("%f",&x.exp1 );
      puts("post: "); scanf("%s",&x.post );
      puts("salary: "); scanf("%f",&x.salary );
      fprintf(f,"workers\n Name: %s \n The department: %s \n the date of birth: %f \n experience: %f\n post: %s \n salary: %10.2f\t", x.name, x.department,  x.datebrth, x.exp1, x.post, x.salary);
    }
  fclose(f);
   return 0;
 }
