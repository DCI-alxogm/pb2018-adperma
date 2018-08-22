#include<stdio.h>
#include<math.h>
int main()
{
	int opcion;
	float c;
	float f;
	float k;
	float x;
	float y;
	float r;
	float o;
 
	printf("Seleccioanr opción 1 o 2 \n");
	printf("1 para convertir temperaturas \n");
	printf("2 para convertir coordenadas \n");

	scanf("%i",&opcion);

	switch(opcion)
	{
	case 1: 
		printf("Elegiste opción 1 \n");
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

		break;

	case 2:
		printf("Elegiste la opción 2  \n");
       		printf("Indica los valores de x,y; las transformaremos a polares:  \n");
		scanf("%f",&x);
		scanf("%f",&y);
		r=sqrt((x*x+y*y));
		printf(" r= %f \n",r);
		o=atan(y/x);
		printf(" o= %f \n",o);
		
		break;

	default:
		printf("Opción invalida \n");
		break;
	}

	return 0;

}

