#include<stdio.h>
#include<math.h>/*Segunpo proyecto, calcular la temperatura de una placa cuadrada*/

			//Prototipos de funciones usadas en el programa

int main(){		//Función principal
	FILE *datos;	//Declaración de archivos y variables
	FILE *resultados;

	int	i,n,x=0,y=0;
	float	der,izq,arr,aba,e;
	
	datos=fopen("datos.txt","r");
	fscanf(datos,"%f %f %f %f %i %f",&der,&izq,&arr,&aba,&n,&e);
	fclose(datos);
	float placa[n][n];
	
	for(y=0;y<n;y++){
		for(x=0;x<n;x++){		/*Incializa todos los valores de la matriz en 0*/
		placa[x][y]=0;				
	}	
	}
	
/*Todas las asignaciones de valores serán funicones individuales que serán llamadas en la principal(Inicio)*/

	for(y=0;y<n;y++){
		placa[0][y]=izq;
		}
	for(y=0;y<n;y++){
		placa[n-1][y]=der;
	}
	for(x=0;x<n;x++){
		placa[x][0]=arr;
	}
	for(x=0;x<n;x++){
		placa[x][n-1]=aba;
	}
/*Solucion de las esquinas de la placa*/
	placa[0][0]=(placa[1][0]+placa[0][1])/2;
	placa[0][n-1]=(placa[0][n-2]+placa[2][n-1])/2;
	placa[n-1][0]=(placa[n-2][1]+placa[1][n-2])/2;
	placa[][]=(placa[][]+placa[][])/2;

	resultados=fopen("resultados","w");
	for(y=0;y<n;y++){
		fprintf(resultados,"\n");
                for(x=0;x<n;x++){
			fprintf(resultados,"%f  ",placa[x][y]);
		}
	}


	fclose(resultados);
	

	
	return 0;
}


			//Funciones adicionales usadas
