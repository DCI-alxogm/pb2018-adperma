#include<stdio.h>
#include<math.h>

int main()
{

	float x;
	float y;
	float z;
	float r;
	float o;
	float p;
	printf("Indica los valores de x,y,z:  \n");
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	r=sqrt((x*x)+(y*y)+(z*z));
	printf(" r= %f \n",r);
	o=atan((sqrt((x*x+y*y))/z));
	printf(" o= %f \n",o);
	p=atan(y/x);
	printf(" p= %f \n",p);



	return 0;

}

