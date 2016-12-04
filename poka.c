#include <stdio.h>
#include <math.h>
int main() {
int x=18, *p, m;
p=&x;
(*p)+=2;
m=(*p)/5;
p=&m;
(*p)+=2;
printf("%d\n",3*(*p));
return 0;
}
