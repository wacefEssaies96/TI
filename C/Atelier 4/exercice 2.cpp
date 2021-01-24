#include<stdio.h>
main()
{
	int tab[10];
	int i,s=0;
	
	for(i=0;i<10;i++)
	{
		printf("donner une valeur : ");
		scanf("%d",&tab[i]);
		s+=tab[i];
		if(s>100){
		break;
		}
	}
	printf("%d",s);
}
