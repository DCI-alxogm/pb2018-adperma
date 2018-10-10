#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *archive;
	float data, *p_data, suma;
	int i, N=267;
		
	archive=fopen("promedio.txt","r");
	
	p_data=(float*) malloc(N*sizeof(float));
	
	for(i=0;i<N;i++){
	
	fscanf(archive, "%f\n" ,p_data+i);
	suma+= *(p_data+i);
		
	}
	
	suma/=N;
	
	printf("El promedio de los datos es: %f\n",suma);
	fclose(archive);
	
	free(p_data);
	return 0;
}
