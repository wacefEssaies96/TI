#include<stdio.h>
main()
{
	int L,C,i,j,N,k;
	int T[10][10],V[L*C];
	
	do
	{
		printf("donner le nombre de ligne L : ");
		scanf("%d",&L);
		
		printf("donner le nombre de colonnne C : ");
		scanf("%d",&C);
		
		if(L>10||C>10||L<=0||C<=0)
		{
			printf("invalid ! \n");
		}
		else
		{
			for(i=0;i<L;i++)
			{
				for(j=0;j<C;j++)
				{
					printf("donenr la valeur de la colonne [%d] de la ligne [%d] : ",j+1,i+1);
					scanf("%d",&T[i][j]);
				}
			}
			printf("\nla table T[i][j] : \n");
			
			for(i=0;i<L;i++)
			{
				printf("|");
				for(j=0;j<C;j++)
				{
					
					printf(" %d ",T[i][j]);
				}
				printf("|\n");
			}
			printf("\nla table V[N] : \n");
			for(i=0;i<L;i++)
			{
				for(j=0;j<C;j++)
				{
					V[N]=T[i][j];
					printf("%4d ",V[N]);	
				}
				
			}
			
		}
		
		
		
	
	}while((L>50&&C>50)||(L<=0)||(C<=0)||(N>L*C));
}
