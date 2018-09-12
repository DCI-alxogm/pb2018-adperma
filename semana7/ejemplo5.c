#include<stdio.h>

int main()
{
int sexo[10];
float semestre[10];
int edad[10];
float calif[10];
int i;

	for(i=0;i<10;i++){
	printf("%i Digite la edad del alumno en años: \n",i+1);
	scanf("%i",&edad[i]);
		}

printf("\n\n");

	for(i=0;i<10;i++){
	printf("%i El alumno es hombre(0) o mujer(1) \n",i+1);
	scanf("%i",&sexo[i]);
	if(sexo[i]==0){ }
	else{
		if(sexo[i]==1){ }
		else{
			printf("El dato introucido es incorrecto \n");
			i=i-1;
				}
		
			}
	}

printf("\n\n");

	for(i=0;i<10;i++){
	printf("%i Digite el semestre que cursa el alumno \n",i+1);
	scanf("%f",&semestre[i]);
	if(semestre[i]<1){
		if(semestre[i]>9){
	printf("Semestre No valido \n");}
	else{}
	}
	}

printf("\n\n");

	for(i=0;i<10;i++){
	printf("%i Ingrese el promedio actual obtenido en la carrera \n",i+1);
	scanf("%f",&calif[i]);
	if(0>calif[i]>10){
	       	printf("Calificacion NO valida \n");
	}
	}

printf("\n \n");

	for(i=0;i<10;i++){
	printf("%i \n",edad[i]);
	}

printf("\n \n");

	for(i=0;i<10;i++){
	printf("%i \n",sexo[i]);
	}

printf("\n \n");

	for(i=0;i<10;i++){
	printf("%f \n",semestre[i]);
	}

printf("\n \n");

	for(i=0;i<10;i++){
	printf("%.2f \n",calif[i]);
	}

return 0;
}
