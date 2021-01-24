#include<stdio.h>
#include<conio.h>
main()
{
	int j,m,a,l;
	
	printf("donner un nombre de jour : ");
	scanf("%d",&j);
	printf("donne un nombre de mois : ");
	scanf("%d",&m);
	printf("donne un nombre d'annee : ");
	scanf("%d",&a);
	l=1;
	if (((j<=0)||(j>31))&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
	{
		printf("invalid !");
	}
	else if (((j<0)||(j>30))&&((m==4)||(m==6)||(m==9)||(m==11)))
	{
		printf("invalid !");
	}
	else if (((j<0)||(j>28))&&(m==2))
	{
		printf("invalid !");
	}
	else if ((j==31)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
	{
		printf("la date du lendemain est : %d-%d-%d",l,m=m+1,a);
	}
	else if ((j==30)&&((m==4)||(m==6)||(m==9)||(m==11)))
	{
		printf("la date de lendemain est : %d-%d-%d",l,m+1,a);
	}
	else if ((j==28)&&(m==2))
	{
		printf("la date du lendemain est : %d-%d-%d",l,m,m+1,a);
	}
	else if ((j==31)&&(m==12))
	{
		printf("la date du lendemain est : %d-%d-%d",l,m/m,a+1);
	}
	else 
	{
		printf("la date du lendemain est : %d-%d-%d",j+1,m,a);
	}
	
	
	
	
	getch();
}
