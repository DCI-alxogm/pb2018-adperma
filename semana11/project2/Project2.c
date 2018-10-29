#include<stdio.h>
#include<math.h>/*Segunpo proyecto, calcular la temperatura de una placa cuadrada*/
	//Prototipos de funciones usadas en el programa

int main(){
			//Función principal
	FILE *datos;
			//Declaración de archivos y variables
	FILE *resultados;
	
	int i,n,name,x=0,y=0;
	float der,izq,arr,aba,e;

	datos=fopen("datos.txt","r");
	fscanf(datos,"%f %f %f %f %i %f",&der,&izq,&arr,&aba,&n,&e);
	fclose(datos);

	float placa[n][n];

	for(y=0;y<n;y++){
		for(x=0;x<n;x++){
		placa[x][y]=0;
		}
	}			/*Incializa todos los valores de la matriz en 0*/

/*Todas las asignaciones de valores serán funicones individuales que serán llamadas en la
principal(Inicio)*/
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
/*Sup Izq*/placa[0][0]=(placa[1][0]+placa[0][1])/2;
/*Inf Izq*/placa[0][n-1]=(placa[0][n-2]+placa[2][n-1])/2;
/*Sup der*/placa[n-1][0]=(placa[n-2][0]+placa[n-2][n+1])/2;
/*Inf der*/placa[n-1][n-1]=(placa[n-2][n-1]+placa[n-1][n-2])/2;
/*Fin de asignación de valores de orillas y demás en 0*/

while(i<10){
	while(placa[4][4]<izq-1){
		     char buffer[32];
        while(name<21) {
		for(y=1;y<n-1;y++){
                                for(x=1; x<n-1; x++){
					placa[x][y]=(placa[x+1][y]+placa[x-1][y]+placa[x][y+1]+placa[x][y-1])/4;

		}
	}

                snprintf(buffer, sizeof(char)*32, "resultados%i",name);
                name++;
	
	resultados=fopen(buffer,"w");
	for(y=0; y<n; y++){
                for(x=0; x<n; x++){
			fprintf(resultados, "%f ", placa[x][y]);
		}
		fprintf(resultados, "\n");
	}
	}
	
	fclose(resultados);
	name=0;
	}
	i++;
	name=0;
	}

	return 0;
}
