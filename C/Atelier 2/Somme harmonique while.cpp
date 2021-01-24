#include<stdio.h>
main()
{
	int n,i;
	float somme=0;
	
	printf("donner n :");
	scanf("%d",&n);
	i=1;
	while (i<=n)
	{
		somme+= (1.0/i);
		i++;
	}
	printf("%f",somme);
	
	
}
