#include<stdio.h>
main()
{
	
	int i,N,j,k,l;
	int T[50];

	do
	{
		printf("donner la dimension du tableau :  ");
		scanf("%d",&N);
	
		if (N<=0 || N>50)
		{
			printf("veillez introduiser un chiffre comprise entre 1 et 50 ! \n");
		}
		else
		{
			for(i=0;i<N;i++)
			{
				printf("donnez la valeur de la case %d : ",i+1);
				scanf("%d",&T[i]);
			}
			
			printf("affichage du tableau normal : ");
			
			for(j=0;j<N;j++)
			{
				printf("|%d",T[j]);
			}
			
			printf("\n");
			printf("affichage du tableau inverse : ");
			
			for(l=0,k=N-1;l=k+1;l++,k--)
			{
				printf("|%d",T[k]);	
				
			}
		}
	}while (N>50);
}

