#include <stdio.h>
#include <math.h>

float expression( float x);

float expression(float x){
	return sqrt(1+pow(x,2))-1+x/(1+cos(x));
}
int main(void){
	float h=2, e,  y, x = 2;
	for(x = 1; x <= 9; x+=2){
		expression(x);
		printf("x=%f \t y=%f\n", x, expression(x));
		if(e<=2 && e>=5){
			printf("dubling=%f\n",pow(expression(x),2));
		}
	}

return 0;

}
