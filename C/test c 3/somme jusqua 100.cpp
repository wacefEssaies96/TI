#include<stdio.h>
main()
{
	int tab[10];
	int s=0;
	int i;
	for(i=0;i<10;i++)
	{
		tab[i]=1;
	}
	do{
	for(i=0;i<10;i++)
	{
		s+=tab[i];
		if(s>100)
		break;
	}
	}while(s<101);
	printf("%d ",s);
}
