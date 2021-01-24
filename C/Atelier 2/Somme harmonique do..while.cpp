#include<stdio.h>
main()
{
	int n,i;
	float somme=0;
	
	printf("donner n :");
	scanf("%d",&n);
	i=1;
	do
	{
		somme+= (1.0/i);
		i++;
	}while (i<=n);
	printf("%f",somme);
	
}
