#include<stdio.h>
main()
{
	int tab[20]={1,2,0,3,0,0,4,5,0,6,0,7,0,0,8,9,0,0,0,10};
	int i,j,k;
	
	for(i=0;i<20;i++)
	{
		printf("%d ",tab[i]);
	}
	printf("\n");
	for(i=0;i<20;i++)
	{
		if(tab[i]==0)
		{
			j=i;
			for(j=i;j<20;j++)
			{	
				if(tab[j]>0)
				{
					tab[i]=tab[j];
					tab[j]=0;
					break;
				}
			for(k=0;k<20;k++)
			{
				printf("%d ",tab[k]);
			}
			printf("\n");				
			}	
		}
	}
	
	for(i=0;i<20;i++)
	{
		printf("%d ",tab[i]);
	}
	
}
