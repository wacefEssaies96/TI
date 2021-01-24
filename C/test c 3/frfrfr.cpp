#include<stdio.h>
main()
{
	int tj[4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		tj[i]=0;
	}
	tj[3]=1;
	for(i=0;i<4;i++)
	{
		if(tj[i]==1)
		{
			tj[i+1]=2;
			tj[i]=0;
		}		
	}
	for(i=0;i<4;i++)
	{
		printf("%d ",tj[i]);
	}
	
}
