/*Gran parte del trabajo se llevó a cabo en casa con el programa DevC++ */

#include<stdio.h>
#include<math.h>

int main()
{
	FILE *data;
	FILE *resultados;
	
	float x=0,y=0,z=0,vx=0,vy=0,vz=0,Tt=0,h=0,G,r;
	int M,i,n=0;
	
	//Escaneo de datos iniciales del archivo

	data=fopen("datos.txt","r");
	fscanf(data, "%f, %f, %f, %f, %f, %f, %i, %f, %f", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
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
		fprintf(resultados,"%f, %f, %f, %f, %f, %f", X[i], Y[i], Z[i], Vxi[i], Vyi[i], Vzi[i]);
	}
			
	fclose(resultados);

	return 0;

}
