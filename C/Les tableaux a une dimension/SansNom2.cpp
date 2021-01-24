#include<stdio.h>
main()
{
	
	int i,N,j;
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
			for(j=0;j<N;j++)
			{
				if(T[j]>0)
				printf("|%d",T[j]);
			}
						
		}
		
		
			
			
			
	
	
	}while (N>50);
}

