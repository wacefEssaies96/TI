#include<stdio.h>
main()
{
	int i,j,N,resultat=0;
	int U[N],V[N];
		
	do
	{
			printf("donner la dimension des 2 vecteurs U et V : ");
			scanf("%d",&N);
			
		for(i=0;i<N;i++) 								/* saisie de données du vecteur U */
		{
			printf("donner la valeur de U : ");
			scanf("%d",&U[i]);		
		}
			
		for(i=0;i<N;i++)								/* saisie de données du vecteur V */
		{
			printf("donner la valeur de V : ");
			scanf("%d",&V[i]);
		}
			
		for(i=0;i<N;i++)								/* calcule */
		{
			resultat+=U[i]*V[i];
		}
			
		printf("|");
			
		for(i=0;j<N,i<N;i++) 							/* affichage des données du vecteur U */
		{
			printf(" %d ",U[i]);
		}
			
			printf("|  *  |");
			
			
		for(i=0;i<N;i++)								/* affichage des données du vecteur V */
		{
			printf(" %d ",V[i]);
		}
		
			printf("| = | %d | \n",resultat);			/*affichage du resultat*/
			
		for(i=0;i<N;i++)								/* affichage de l'operation */
		{
			printf("%d * %d ",U[i],V[i]);
			if(i==(N-1))
			{
				printf("  ");					
			}
			else 
			{
				printf(" + ");
			}
		}
		printf(" =  %d  \n",resultat);					/*affichage du resultat*/
		
		
	}while(N<=0||N>10);
}

