#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	
	printf("donner un nobmre de jour de la semaine : ");
	scanf("%d",&n);
	
	
	if(n==1)
	{
		printf("le jour correspondant a ce jour est : lundi ! ");
	}
	else if(n==2)
	{
		printf("le jour correspondant a ce jour est : mardi !");
	}
	else if(n==3)
	{
		printf("le jour correspondant a ce jour est : mercredi !");
	}
	else if(n==4)
	{
		printf("le jour correspondant a ce jour est : jeudi !");
	}
	else if(n==5)
	{
		printf("le jour correspondant a ce jour est : vendredi !");
	}
	else if(n==6)
	{
		printf("le jour correspondant a ce jour est : samedi !");
	}
	else if(n==7)
	{
		printf("le jour correspondant a ce jour est : dimanche !");
	}
	else{
	
		printf("le nobmre est invalide !");
	}
	
	
	
getch();	
}
