#include <stdio.h>
main()
{
	int T[50][50],L,C,i,j;
	
	do
		{
		
		printf("donner le nombre de ligne du tableau :  ");
		scanf("%d",&L);
		
		printf("donner le nombre de collonne du tableau : ");
		scanf("%d",&C);
		
		if(L>50||L<=0||C>50||C<=0)
		{
			printf("invalid !");
		}
		else
		{
			for(i=0;i<L;i++)
			{
				for(j=0;j<C;j++)
				{
					printf("donner la valeur de la case : ");
					scanf("%d",&T[i][j]);
				}
			}
			for(i=0;i<L;i++)
			{
				for(j=0;j<C;j++)
				{
					printf("|%d ",T[i][j]);
				}
				printf("\n");
			}
		}
	}while((L>50&&C>50)||(L<0&&C<0));
}
