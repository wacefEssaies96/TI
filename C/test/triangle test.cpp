#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,esp=0;
	
	printf("donner la grandeur du triangle : ");
	scanf("%d",&n);
	
	
	
	for(i=1;i<=n;i++)
	{
		for(esp=n-1;esp!=0;esp--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			
			printf("*");
		}
		printf("\n");
	}
	
}
