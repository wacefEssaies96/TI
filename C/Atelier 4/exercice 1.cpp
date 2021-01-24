#include<stdio.h>
#include<conio.h>
main()
{
	int tab[10];
	int i,s=0,neg=0,pos=0;
	
	for(i=0;i<10;i++)
	{
		printf("donner une valeur : ");
		scanf("%d",&tab[i]);
		if(tab[i]<0)
		{
			neg++;
		}
		if(tab[i]>0)
		{
			pos++;
		}
	}
	printf("pos : %d\nneg : %d",pos,neg);
}
