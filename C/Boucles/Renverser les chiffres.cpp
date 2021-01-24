#include<stdio.h>
main()
{
	int i=0,x,v=1,res;
	
	do
	{
		printf("donner le %d chiffre : ",i+1);
		scanf("%d",&x);
		
		if (x<0 || x>9)
		{
			printf("\a");
		}
		else if (x)
		{
			res+=v*x;
			i++;
			v*=10;
		}
		else
		{
			printf(" %d ",res);
		}
	}while(x);
}
