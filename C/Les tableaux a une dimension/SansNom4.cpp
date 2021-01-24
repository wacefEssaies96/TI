#include<stdio.h>
main()
{
	
	int i,N,j,k,l,p,n;
	int T[50],TPOS[50],TNEG[50];
	
	
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
			
			for(l=0,n=0,p=0;l<N;l++)
			{
				if(T[l]<0)
				{
					TNEG[n]=T[l];
					n++;
				}
				else 
				{
					TPOS[p]=T[l];
					p++;
				}
			}
			printf("le tableau des valeur negatives : ");
			for(j=0;j<p,j<n;j++)
			{
				printf("|%d",TNEG[j]);
			}
			printf("\nle tableau des valeurs positives : ");
			for(k=0;k<N;k++)
			{
				printf("|%d",TPOS[k]);
			}
				
		}		
	}while (N>50);
	
}
