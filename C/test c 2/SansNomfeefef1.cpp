#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
int main (){
char matricee[4][4];
FILE *matrice;
int i,j,l=4,c=4;
matrice=fopen ("matrice.txt","r") ;

for (i=0;i<l;i++)
	{
for (j=0;j<c;j++)
	{
		fscanf(matrice,"%s",matricee);
	}
} 
fclose(matrice) ;
//affichage 
		printf("\n_____________\n");
		for (i=0;i<l;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("|%c ",matricee[i][j]);
			}
		printf("|\n_____________\n");
	}
 return 0;
 }
