#include<stdio.h>
#include<math.h>

int main()
{
	float x,i,n,s;
	
	printf("Ingresa el valor inicial de X: \n");
	scanf("%f",&x);

	printf("Ingresa el intervalo o rango hasta el que deseas calcular los datos \n");
	scanf("%f",&n);

	printf("Ingresa el espaciado que deseas usar: \n");
	scanf("%f",&s);

	for(i=x;i<=n;i++){
		printf("Exponencial: %.2f \n", exp(i));
		printf("Logaritmo: %.2f \n", log(i));
		printf("Seno: %.2f \n", sin(i));
		printf("Coseno: %.2f \n", cos(i));
		printf("Raiz Cuadrada: %.2f \n \n", sqrt(i));
	}

	return 0;
}
