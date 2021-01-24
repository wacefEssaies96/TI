#include<stdio.h>
main()
{
	int tab[10];
	int i,x,nbr,pp,dp;
	
	for(i=0;i<10;i++)
	{
		printf("donner un nombre : ");
		scanf("%d",&tab[i]);
	}
	printf("donnner x a chercher : ");
	scanf("%d",&x);
	
	for(i=0;i<10;i++)
	{
		if(tab[i]==x)
		{
			nbr=nbr+1;
			if(nbr<1)
			{
				pp=i;
				dp=i;
			}
			if(nbr>1)
			{
				dp=i;	
			}
		}	
	}
	printf("le nombre d'apparition est : %d\nla premiere position est : %d\nla derniere position est : %d",nbr,pp,dp);
	



}
