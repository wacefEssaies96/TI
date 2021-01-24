#include<stdio.h>
main()
{
	
	int i,N,somme,j;
	int T[N];
	
	
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
				printf("donnez la valeur de la case %d : ",(i+1));
				scanf("%d",&T[N]);
			}			
		}
		
		for(j=0,somme=0;j<N;j++)
		{
			somme+=T[N];
		}
		
		
		
		
		printf("la somme des valeur est :  %d",somme);	
	}while (N>50);
	
}

