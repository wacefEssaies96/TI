#include<stdio.h>
#include<math.h>
main()
{
	int T[8];
	int i,res=0;

	for(i=7;i>=0;i--)	
	{
		printf("donner un nombre binaire : ");
		scanf("%d",&T[i]);
	}
	for(i=0;i<8;i++)	
	{
		if(T[i]==1)
		{
			res+=T[i]*pow(2,i);
		}
	}
	printf("le nobmre decimale est : %d",res);
//	for(i=0;i<8;i++)	
//	{
//		printf("%d",T[i]);
//	}	
}
