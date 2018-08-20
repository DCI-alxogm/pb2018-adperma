#include<stdio.h>
int main()
{

	float c;
	float k;
	float f;
	printf("Introduce la temperatura en grados centigrados: ");
	scanf("%f",&c);
	k=c+273.15;
	printf("La temperatura en kelvin es: %f \n",k);
	f=(9*c/5)+32;
	printf("La temperatura en Fahrenheit es: %f\n" ,f);
	printf("Introduce la temperatura en Fahrenheit, la devolveremos a centigrados: ");
	scanf("%f",&f);
	c=(5*(f-32))/9;
	printf("La temperatura en centigrados es: %f \n",c);

	return 0;



}
