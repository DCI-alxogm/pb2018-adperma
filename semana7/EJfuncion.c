#include<stdio.h>
#include<math.h>

int main()
{
	FILE *datos;
	FILE *resultados;
	int p, a, b, N, k, i;
	float x, delta;

	datos=fopen("entrada.txt","r");

	fscanf(datos, "%i",&p);
	fscanf(datos, "%i",&a);
	fscanf(datos, "%i",&b);
	fscanf(datos, "%i",&N);

	if(p<0){
		printf("La potencia no es valida \n");
		return 1;
	}

	delta=(b-a)/N;
	       	/*Dependiendo del valor N de evaluaciones a realizar, el intervalo k cambia acorde a los limites a y b, delta representa el intervalo de avance para la variable k*/

	for(i=0;i<N;i++) //Ciclo para el numero de evaluaciones de x
	{
		x=a+(delta*i);
	}

/*Ahora se debe de evaluar 


	return 0;
}

	

	
