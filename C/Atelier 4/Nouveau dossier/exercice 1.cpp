#include<stdio.h>
#include<conio.h>
main()
{
	int i=2,j=2,x,c;
	c=0;
//	while(c>101)
//	{
		for(i=2;i<1000;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					break;	
				}
				if(i%j!=0)
				{
//					x=i;
					printf("%d ",i);
					break;
					c++;
				}
			}
		}
//	}
}
	
//i=2;
//j=1;
//while(i<101)
//{
//	while((j<i)&&(i%j==0))
//	{
//		if(i%j!=0)	
//		{
//			printf("%d ",i);
//			
//		}
//		j++;
//	}
//	i++;
//}
	


