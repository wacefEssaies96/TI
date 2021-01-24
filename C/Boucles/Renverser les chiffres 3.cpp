#include<stdio.h>
main()
{
	int i=0,x,n=0,v=1;
	
	do
	{
		printf("donner le %d chiffre : ",i+1);
		scanf("%d",&x);
		if (x<0||x>9)
		printf("\a");
		else if (x)
		{
			n+=v*x;
			i++;
			v*=10;
		}
		else
		{
			printf("%d",n);
		}	
	}while(x);
}

