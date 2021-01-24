#include<stdio.h>
#define taille 4
main()
{
	int i,j;
	char tab[4][4];
	
	FILE *fichier;
	
	fichier=fopen("fichier.txt","r");
	
	if(fichier!=NULL)
	{
		for(i=0;i<taille;i++)
		{
			for(j=0;j<taille;j++)
			{
				fscanf(fichier,"%s\n",tab);
			}
		}
		fclose(fichier);
	}
	
	for(i=0;i<taille;i++)
		{
			for(j=0;j<taille;j++)
			{
				printf("%c ",tab[i][j]);
			}
			printf("\n");
		}
	
}

