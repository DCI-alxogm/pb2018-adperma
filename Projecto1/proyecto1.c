/*Gran parte del trabajo se llevó a cabo en casa con el programa DevC++ */

#include<stdio.h>
#include<math.h>

int main()
{
	FILE *data;				//Declaración de archivos
	FILE *resultados;
	
	double x=0,y=0,z=0,vx=0,vy=0,vz=0,Tt=0,h=0,G,r;		//Declaración de variables
	int M,i,n=0,usar,planeta;
	
	printf("¿Deseas usar este programa? (1)No  (2)Si \n");
	scanf("%i",&usar);
	
	switch(usar){
		
		case 1:
			printf("Entendido");
			return 1;					//Da pie a la selección del conjunto de datos que se desea utilizar
			
		case 2:
			
	printf("¿Con que planeta deseas trabajar?\n");
	printf(" (1)mercurio\n (2)venus\n (3)tierra\n (4)marte\n (5)jupiter\n (6)saturno\n (7)urano\n (8)neptuno\n");
	scanf("%i",&planeta);
	
	
	switch(planeta){		//Se usa para que cada conjunto de indicaciones se haga con el archivo de valores iniciales correcto
	
	case 1:
	{	
	data=fopen("mercurio.txt","r");  			//Escaneo de datos iniciales del archivo
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);					//Valores constantes que se usarán a lo largo del programa
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){				//Ciclo para definir los valores x,y,z y velocidades correspondientes en los arreglos indicados
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));		//Ecuaciones a resolver por la computadora(se repiten en cada caso para cada planeta)
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];				//Indica los nuevos valores que tomarán las variables para continuar con el loop
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w"); 			//Escribe el nuevo archivo de texto
	
	fprintf(resultados,"X		Y		Z		Vx		Vy		Vz\n");      //Imprime en el archivo de resultados las salidas de cada array en las columnas respectivas
	
	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);	  //Cambian para cada planeta
	}
			
	fclose(resultados); 	//Finaliza la escritura del texto
	break;
	}
	case 2: 		//Las indicaciones se repiten para cada planeta, variando únicamente el archivo de lectura de condiciones iniciales//
	{
	data=fopen("venus.txt","r");
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w");
	
	fprintf(resultados,"X		Y		Z		Vx		Vy		Vz\n");
	
	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);
	break;
	}
	case 3:
	{
	data=fopen("tierra.txt","r");
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w");
	
	fprintf(resultados,"X		Y		Z		Vx		Vy		Vz\n");
	
	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);
	break;
}
	case 4:
	{
	data=fopen("marte.txt","r");
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w");
	
	fprintf(resultados,"X		Y		Z		Vx		Vy		Vz\n");
	
	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);
	break;
	}
	case 5:
	{
	data=fopen("jupiter.txt","r");
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w");
	
	fprintf(resultados,"X		Y		Z		Vx		Vy		Vz\n");
	
	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);
	break;
	}
	case 6:
	{
	data=fopen("saturno.txt","r");
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w");
	
	fprintf(resultados,"X		Y		Z		Vx		Vy		Vz\n");
	
	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);
	break;
}
	case 7:
	{
	data=fopen("urano.txt","r");
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w");
	
	fprintf(resultados,"X		Y		Z		Vx		Vy		Vz\n");
	
	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);
	break;
}
	case 8:
	{
	data=fopen("neptuno.txt","r");
	fscanf(data, "%lf, %lf, %lf, %lf, %lf, %lf, %i, %lf, %lf", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	fclose(data);
	
	G=4*pow(3.1416,2);
	n=Tt/h;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float X[n];
	float Y[n];			//Arreglos para guardar los valores de las posiciones y velocidades
	float Z[n];
	float Vxi[n];
	float Vyi[n];
	float Vzi[n];
	
	for(i=0;i<n;i++){
		
		X[i]=(x+(vx*h));
		Y[i]=(y+(vy*h));
		Z[i]=(z+(vz*h));
	
	Vxi[i]=(vx-h*((G*M*x)/(pow(r,3))));
	Vyi[i]=(vy-h*((G*M*y)/(pow(r,3))));
	Vzi[i]=(vz-h*((G*M*z)/(pow(r,3))));
		
		x=X[i];
		y=Y[i];
		z=Z[i];
		vx=Vxi[i];
		vy=Vyi[i];
		vz=Vzi[i];
	}
	
	resultados=fopen("resultados.txt","w");
	

	for(i=0;i<n;i++){
		fprintf(resultados,"%lf, 	%lf, 	%lf, 	%lf, 	%lf, 	%lf\n", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);
	break;
}
}		//Aquí se cierran las indicaciones iniciales de uso de programa y selección de planeta
}
	printf("Se han impreso los valores de posicion y velocidad en el archivo de resulatdos,\nlistos para ser graficados \n");
	return 0;

}
