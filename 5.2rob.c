#include<stdio.h>
#include<math.h>

int main(void){
	int n;
	double a, x, y=-2, z, dx = 1.75, dy = 1.75;
	printf("z = ");
	scanf("%lf",&z);
	while (  y <= 4  ) {
		printf("\ty = %lf\n",y );
		for (x = 3; x <= 9; x += dx){
			a = pow(sin(x) * cos(y) / (atan(z)),2) / (tan(x) + pow(y,2) / (sqrt(pow(z,3))));
			printf("\a\t\tx = %.2lf\ta = %.5lf\n", x, a );
		}
	y += dx;
	}

return 0;
}
