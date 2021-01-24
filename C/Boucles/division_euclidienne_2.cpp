#include<stdio.h>
#include<conio.h>
main()
{
	int dividende,diviseur,i,reste,resultat;
	do
	{
	printf("donner la dividende : ");
	scanf("%d",&dividende);
	printf("donner le diviseur : ");
	scanf("%d",&diviseur);
	}
	while(dividende<diviseur);
	resultat=0;
	reste=dividende;
	do
	{
		reste-=diviseur;
		resultat++;		
	}while(reste>=diviseur);
	printf(" %d %d",resultat,reste);
	
	
	
}
