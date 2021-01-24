#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	
	do
	{
	printf("donner un entier : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("invalid !\n");
	}
	}while(n<0);
	do{
	if(n%2==0)
	{
		n=n/2;
		printf("%d ",n);	
	}
	else if (n%2!=0)
	{
		n=(3*n)+1;
		printf("%d ",n);
	}
	}while(n!=1);
		
	
}
