#include<stdio.h>
main()
{
	int a,b;
	
	printf("donner a : ");
	scanf("%d",&a);
	printf("donner b : ");
	scanf("%d",&b);
	
	if (a==0 || b==0) 
	{
		printf("nul");
	}
	else if ((a<0 && b<0)||(a>0 && b>0))
	{
		printf("positifs");
	}
	else if (a>0 || b>0)
	{
		printf("negatifs");
	}
	
	
	
	
}
