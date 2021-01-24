#include<stdio.h>
#include<conio.h>
main()
{
	int dividende,diviseur,i,reste;
	do
	{
	printf("donner la dividende : ");
	scanf("%d",&dividende);
	printf("donner le diviseur : ");
	scanf("%d",&diviseur);
	}
	while(dividende<diviseur);
	
	for(reste=0,i=0;dividende>0;i++)
	{
		dividende-=diviseur;
		
	}
	printf("%d %d",i,dividende);
	
	
	
}
