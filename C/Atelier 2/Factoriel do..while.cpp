#include<stdio.h>
main()
{
	int i,f,n;
	
	printf("donner n : ");
	scanf("%d",&n);
	
	f=1;
	i=1;
	
	do
	{
		f*=i;
		i++;
	}while (i<=n);
	printf("le fac : %d",f);
	
	
	
}
