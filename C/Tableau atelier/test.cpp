#include<stdio.h>
main()
{
	int t[10]={10,20,2,5,4,7,22,33,40,9};
	int i,max=0,max2=0;
	
	for(i=0;i<10;i++)
	{
		if(t[i]>t[i+1])
		{
			max=t[i];
		}
		if(max>0)
		{
			if((t[i]>t[i+1])&&(maxt[i]))
			{
				max2=t[i];		
			}
		}
	}
	printf("%d\n%d ",max,max2);
}
