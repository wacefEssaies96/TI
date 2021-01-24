#include<stdio.h>
main()
{
	int f=1,i,n;
	
	printf("donner n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("le factoriel est : %d ",f);
	
	
}
