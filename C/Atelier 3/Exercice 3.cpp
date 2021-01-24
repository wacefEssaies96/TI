#include<stdio.h>
main()
{
	int n=10,f=1;
	int i,premier=1,deuxieme=1;
	
	for(i=2;i<=n;i++)
	{
		f=premier+deuxieme;
		premier=f;
	printf("% d ",f);
	}
	
}
