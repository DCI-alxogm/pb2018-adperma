#include <stdio.h>
#include <stdlib.h>

int main(){

	int num, i, *ptr, sum=0;
	
	printf("Introduce el numero de elementos: ");
	scanf("%d", &num);

	ptr = (int*) malloc(num*sizeof(int)); //reserva la memoria necesaria
	
	if(ptr==NULL){
		printf("Error! memoria no reservada.");
		exit(0);
	}

	printf("Introduce los elementos del arreglo: ");
	for(i=0; i<num; i++){
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}

	printf("sum=%d",sum);
	free(ptr);
	return 0;
}

