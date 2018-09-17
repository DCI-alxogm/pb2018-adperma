#include<stdio.h>

int main()
{
	int i;
	int N=10;
	float valores[N];//Array de valores

	for(i=0;i<N;i++){
		scanf("%f",&valores[i]);
		valores[i]*=2; //se multiplican por dos los valores ingresados
		printf("%f\n",valores[i]);


	}
	return 0;
}
