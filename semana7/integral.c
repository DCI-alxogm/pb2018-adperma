/*Programa finalizado en casa con "C++" para windows, realiazdo 
por Adrián Pérez Maya el 21 de Septiembre */

#include<stdio.h>
#include<math.h>

int main()
{
           FILE *valores;		//Inicialización de los valores y del archivo FILE
           
           int j,i,p,N,n;
           float a,b,c,fa,h,sum;
		    
           valores=fopen("datos.txt","r");			//lectura del archivo de texto
           fscanf(valores, "%i, %f, %f, %i, %i", &p, &a, &b, &N, &n);
           printf("%i, %f, %f, %i, %i \n", p, a, b, N, n);
           fclose(valores);	
		   									//Se cierra para ahorrar memoria de la maquina
           
           float x[N], fx[N], intx[N];     //Arrays para los valores de f(x),f´(x) y I(x)
           if(p<0){
                  printf("La potencia es negativa \n");
                  return 1;					
                  }
				        					//Comprobación de potencia válida
           for(i=0;i<N;i++){
                           x[i]=0;
                           fx[i]=0;			
                           intx[i]=0;
                           }				//Calculos para evaluar la función
						   				
           for(i=0;i<N;i++){				
                           x[i]=0;
                           fx[i]=0;			
                           intx[i]=0;		//Cálculos para la derivada
                           }
                           
          c=(b-a)/N;						
          for(i=0;i<N;i++){
                          x[i]=a+(i*c);
                          fx[i]=pow(x[i],p);		//Cálculos para la integral
                          }
                          
          fa=pow(a,p);
          for(i=0;i<N;i++){
                          h=(x[i]-a)/n;
                          sum=0;
                          for(j=1;j<n;j++){
                                           sum=sum+(pow((x[i]+(h*j)),p));
                                          }
                          intx[i]=((fx[i]+fa)/2.0);
                          }
                          
            //Se imprime la tabla de resultados a un archivo de texto
                          
          valores=fopen("resultados.txt", "w"); 	 
          fprintf(valores, "x , fx , int(x) \n");
          for(i=0;i<N;i++){
          					fprintf(valores," %f  %f  %f", x[i], fx[i], intx[i]);
                          }
                          
          fclose(valores);
          
          return 0;
          }
