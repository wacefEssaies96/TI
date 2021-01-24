#include<stdio.h>
main()
{
	int n,i;
	float somme=0;
	
	printf("donner n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		somme+= (1.0/i);
	}
	printf("%f",somme);
	
	
}
