#include <stdio.h>
main()
{
	int i;
	double tab[2]; 
	FILE *fichier;
	fichier = fopen("essai.txt","r");
	
	if (fichier != NULL)
	{
		for(i=0;i<2;i++)
		{
			fscanf(fichier,"%lf\n",tab+i);
		}
		fclose(fichier);
	}
	for( i=0;i<2;i++){
	printf("%lf\n",tab[i]);
	} 
}
