#include<stdio.h>
#include<math.h>

int main()
{

	float x;
	float y;
	float b;
	printf("Indica el valor de x: \n");
	scanf("%f",&x);
	b=x*(3.1416/180);
	y=exp(b);
	printf("Para y=exp(x), y= %f \n",y);
	y=cos(b)+2*tan(b/2);
	printf("Para y=cos(x)+2tan(x/2); y= %f \n",y);
	y=log(b)+(3*b*b);
	printf("Para y=log(x)+3χ², y= %f \n",y);


	return 0;
}
