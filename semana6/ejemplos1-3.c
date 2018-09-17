#include<stdio.h>

int main()

{
	int i;
	int N=10;
	float numeros[N];

	//Ej1

	for(i=0;i<N;i++){
		numeros[i]=0; 
	}
	
	//Ej2

	for(i=0;i<N;i++){
		scanf("%f",&numeros[i]);
	}
	
	//Ej3

	for(i=0;i<N;i++){
		printf("%.2f\n",numeros[i]);
	}

	return 0;
}
