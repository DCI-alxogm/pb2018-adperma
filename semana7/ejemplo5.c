#include<stdio.h>

int main()
{
	int sex;
	int edad;
	int semestre;
	float calif;
	float N;


	printf("Ingresa el numero de alumnos a analizar: \n");
	scanf("%f",&N);
	for(i=0;i<N;i++){
		printf("Al alumno es hombre(0) o mujer(1)\n");
		scanf("%i",&sex);
	}

	return 0;
}
