#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,x;
	
	for(i=2;i<101;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;	
			}
			if(i%j!=0)
			{
				x=i;
				printf("%d ",x);
				break;
			}
		}
	}

	
	
	getch();
}

