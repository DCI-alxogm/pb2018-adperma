#include<stdio.h>	//Con entrada y sin salida

void cuadrado(float h);
int main(){
	float x,x2;
	x=cuadrado(x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es %f\n",x,x2);
	return 0;
}

void  cuadrado(float h){
	float x,x2;
	printf("introduce un numero: \n");
        scanf("%f",&x);
	x2=x*x;
}
