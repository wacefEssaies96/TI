#include<stdio.h>
main()
{
	int ts[10]={0,3,2,10,4,6,7,8,2,1};
	int tj[10];
	int i;
	int x=0;
	
	for(i=0;i<10;i++){
		for(int j=i;j<10;j++)
		{
			if(ts[j]<ts[i])
			{
				printf("%d ",ts[j]);
			}
		}
	}
}
