#include<stdio.h>
main()
{
	char ch[7][9]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
	int L;
	
	printf("donner un entier entre 1 et 7 : ");
	scanf("%d",&L);
	
	printf("%s",ch[L-1]);
	
	
}
