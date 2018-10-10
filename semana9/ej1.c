#include<stdio.h>

void cuadrado();
int main(){
	cuadrado();
	return 0;
}

void cuadrado(){
	float x, x2;
	printf("Introduce u numero: \n");
	scanf("%f",&x);
	x2=x*x;
	printf("Elcuadrado de %.4f es %.4f \n",x,x2);
}
