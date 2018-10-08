#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *datos;
	int i,suma=0,N=267;
	float numeros[N],prom;

	datos=fopen("promedio.txt","r");
	
	numeros=(float*) malloc(N*sizeof(float));

	prom = numeros;
	*prom = *numeros;

	for(i=0;i<N;i++){

		scanf("%f",&numeros[i]);
		suma+=numeros[i];
}
	fclose(datos);

	prom=suma/N;

	printf("%f",prom);

	return 0;
}


