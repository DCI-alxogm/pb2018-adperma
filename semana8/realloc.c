#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr, i, n1, n2;
	printf("Introduce el numero de lementos n1: ");
	scanf("%d",&n1);
	printf("Introduce el nuevo numero de elementos n2: ");
	scanf("%d", &n2);
	ptr = (int*) malloc(n1*sizeof(int));

	printf("Dirección de la memoreia reservada:");

	for(i=0; i<n1;i++){
		printf("%x\t",ptr+i);
	}
	ptr=realloc(ptr,n2);

	for(i=0; i<n2; i++){
		printf("x\t",ptr+i);
	}
	free(ptr);
	return 0;
}
