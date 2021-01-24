#include<stdio.h>
int puissance(int *res,int a,int p)
{
	for(int i=0;i<p;i++)
	{
		*res+=a*a;
	}
}

main()
{
	int a;
	int p;
	int res;
	puts("donner a : ");
	scanf("%d",&a);
	puts("donner la puissance : ");
	scanf("%d",&p);
	puissance(&res,a,p);
	
	printf("puissance : %d",res);
		
}

