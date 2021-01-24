#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,moy;
	
	printf("donner la note 1 : ");
	scanf("%d",&a);
	printf("donner la note 2 : ");
	scanf("%d",&b);
	printf("donner la note 3 : ");
	scanf("%d",&c);
	printf("donner la note 4 : ");
	scanf("%d",&d);
	
	moy=(a+b+c+d)/4;
	
	if ((moy<0)||(moy>20))
	{
		printf("moyenne invalide !");
	}
	else if (moy<=8)
	{
		printf("refuse");
	}
	else if (moy<=11)
	{
		printf ("admis avec mention passable");
	}
	else if (moy<=14)
	{
		printf ("admis avec mention asse bien");
	}
	else if (moy<=17)
	{
		printf ("admis avec mention tres bien");
	}
	else if (moy<=20)
	{
		printf ("admis avec mention exelent");
	}
	getch();
}
	
