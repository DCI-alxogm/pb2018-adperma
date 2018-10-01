#include<stdio.h>
#include<math.h>

int main(){

		FILE *coor;

		coor=fopen("coor.txt","w");
	

		fprintf(coor," 12	56	43\n");

		fclose(coor);

		return 0;

}


