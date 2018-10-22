#include<stdio.h>
#include<math.h>/*Segunpo proyecto, calcular la temperatura de una placa cuadrada*/

			//Prototipos de funciones usadas en el programa

int main(){		//Función principal
	FILE *datos;	//Declaración de archivos y variables
	FILE *resultados;

	int	n;
	float	Tba,Tbb,Tbc,Tbd,e;

	datos=fopen("datos.txt","r");
	fscanf(datos,"%f %f %f %f %i %f",&Tba,&Tbb,&Tbc,&Tbd,&n,&e);
	fclose(datos);
	

	return 0;
}


			//Funciones adicionales usadas
