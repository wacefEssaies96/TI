#include<stdio.h>
main()
{
	int espace=0,n,i,x=1,j;
	
	printf("donner n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		espace=n-i;
//		printf("%d \n",espace);
		for(j=0;j<espace;j++)
		{
			printf(" ");
		}
		for(j=0;j<n-espace+1;j++)
		{
			printf("%d ",x);
			x++;
		}
		
		printf("\n");
		
	}
		
}
