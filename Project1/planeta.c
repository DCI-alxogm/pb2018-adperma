#include<stdio.h>
#include<math.h>

int main()
{
	FILE *data;
	FILE *resultados;
	
	float x,y,z,vx,vy,vz,Tt,h,xi,yi,zi,vxi,vyi,vzi,G,r,to=0,ti;
	int M,i,j=0,k,n;
	
	//Escaneo de datos iniciales del archivo

	data=fopen("earthbegin.txt","r");
	fscanf(data, "%f, %f, %f, %f, %f, %f, %i, %f, %f", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	G=4*pow(3.1416,2);
	n=Tt/h;
	k=h*1000;
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	float Xi[n];
	float Yi[n];			//Arreglos para guardar los valores de las posiciones
	float Zi[n];

	fclose(data);
	
	for(j=0;j<=1000;j+k){			//Ciclo para las nuevas posiciones respecto al tiempo
		
		xi=(x+(vx*h));
		yi=(y+(vy*h));
		zi=(z+(vz*h));
	
	vxi=(vx-(h*((G*M*x)/(pow(r,3)*to))));
	vyi=(vy-(h*((G*M*y)/(pow(r,3)*to))));
	vzi=(vz-(h*((G*M*z)/(pow(r,3)*to))));
	
	}

	resultados=fopen("resultados.txt","w");
	for(i=0;i<=n;i++){
	fprintf(resultados,"%f", Xi[i]);
		}

	fclose(resultados);

	return 0;
}
