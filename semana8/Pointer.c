#include<stdio.h>

int main(){
	
	int i,num[6],sum=0;   //Declaraci�n de variables: Contador, arreglo, funci�n sumatoria
	
	printf("Introduce 6 numeros enteros: \n");
	for(i=0;i<6;i++){
		
		// (num+i) = &num[i]
		scanf("%i",(num+i));	/*escaneo y almacenamiento del valor en la memoria*/

		// (num+i) = num[i]
		sum+=*(num+i);			/* sum es igual a ir adicionando el valor numerico que tiene la posici�n (num+i) en la memoria)*/
	}
	
	printf("Suma= %i",sum);	
	return 0;
}
