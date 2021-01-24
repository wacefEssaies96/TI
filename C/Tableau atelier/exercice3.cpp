#include<stdio.h>
main()
{
	int i,nbr=0,x,pp=0,dp=0;
	int T[10]={1,2,4,5,2,6,3,4,5,2};
	
	printf("donner le nombre a rechercher : ");
	scanf("%d",&x);
	
	for(i=0;i<11;i++)
	{
		if(T[i]==x)
		{
			if(nbr==0)
			{
				pp=i;
			}
			nbr+=1;
			dp=i;
		}
	}
	if(nbr==0)
	{
		printf("x n'existe pas ! ");
	}
	else 
	{
		printf("le nombre d'apparition de x est : %d\nla premiere position de x est : %d\nla dernier position de x est : %d",nbr,pp+1,dp+1);
	}
	
}
