#include<stdio.h>
#include<math.h>

int main()
{
	FILE *data;
	
	float x,y,z,vx,vy,vz,Tt,h,xi,yi,zi,vxi,vyi,vzi,G,r,to=0,ti;
	int M;
	
	data=fopen("earthbegin.txt","r");				//Escaneo de valores para la resolución por Euler
	fscanf(data, "%f, %f, %f, %f, %f, %f, %i, %f, %f", &x, &y, &z, &vx, &vy, &vz, &M, &Tt, &h);
	
	fclose(data);
	
	xi=(x+(vx*h));
	yi=(y+(vy*h));
	zi=(z+(vz*h));
	
	vxi=(vx-(h*((G*M*x)/(pow(r,3)*to))));
	vyi=(vy-(h*((G*M*y)/(pow(r,3)*to))));
	vzi=(vz-(h*((G*M*z)/(pow(r,3)*to))));
	
	xi=x;
	yi=y;
	zi=z;
	
	to+=ti;
	
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
