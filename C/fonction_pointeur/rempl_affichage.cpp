#include<stdio.h>
#define taille 4

char remplissage(char tableau[taille][taille])
{
	for(int i=0;i<taille;i++)
	{
		for(int j=0;j<taille;j++)
		{
			printf("donner la valeur de la case [%d][%d] : ",i+1,j+1);
			scanf("%s",&tableau[i][j]);
		}
	}
	return(tableau[taille][taille]);
}
char affichage(char tableau[taille][taille])
{
	for(int i=0;i<taille;i++)
	{
		for(int j=0;j<taille;j++)
		{
			printf("% c ",tableau[i][j]);
		}
		printf("\n");
	}
	return(tableau[taille][taille]);	
}
int main()
{
	char tableau[taille][taille];	
	remplissage(tableau);
	affichage(tableau);
	return 0;	
}
