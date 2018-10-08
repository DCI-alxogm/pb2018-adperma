#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,sum=0;
	int*num;
	
	printf("Introduce 6 numeros enteros: \n");
	
	num=(int*) malloc(6*sizeof(int));
	
	for(i=0;i<6;i++){
		
		// (num+i) = &num[i]
		scanf("i",&num[i]);
		// *(num+i) = num[i]
		sum+=num[i];		
	}
	
	printf("Suma= %i",sum);	
	return 0;
}
