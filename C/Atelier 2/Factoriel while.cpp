#include<stdio.h>
main()
{
	int i,f,n;
	
	printf("donner n : ");
	scanf("%d",&n);
	
	f=1;
	i=1;
	
	while(i<=n)
	{	
		f*=i;
		i++;	
	}
	printf("le fac : %d",f);
	
	
}
