#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,l,esp,v;
	
	printf("donne le nombre de ligne : ");
	scanf("%d",&n);
	
	for(l=0;l<n;l++)
	{
		esp=n-l;
		for(i=0;i<esp;i++)
		{
			putchar(' ');
		}
		
		for(i=0;i<2*l+1;i++)
		{
			
			printf("%d ",v+1);
			v=i;
		}
		putchar('\n');
	}
}
