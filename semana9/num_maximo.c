#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *archive;
	int i, N=97;
	float data, *p_data,a ,b, c;
	
	archive=fopen("num_maximo.txt","r");
	
	p_data=(float*) malloc(N*sizeof(float));
	
	for(i=0;i<N;i++){
		
		fscanf(archive, "%f\n",p_data+i);
		
	
		
		
	}
	fclose(archive);
	
	free(p_data);
	return 0;
}
