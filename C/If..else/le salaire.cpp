#include<stdio.h>
#include<conio.h>
main()
{
	int x,k,t,s,tt;
	
	printf("donner le nombre d'heur de travaille : ");
	scanf("%d",&x);
	printf("donne le tarifs horaire : ");
	scanf("%d",&t);
	
	if (x<=39)
	{
		k=1;
		printf("le salaire est : %d",s=x*(t*k));	
	}
	else if ((x>=40)&&(x<=44))
	{
		k=1.2;
		tt=t*k;
		printf("le salaire est : %d",s=tt*x);
	}
	else if ((x>=45)&&(x<=49))
	{
		k=1.5;
		tt=t*k;
		printf("le salaire est : %d",s=tt*x);
	}
	else
	{
		k=2;
		tt=t*k;
		printf("le salaire est : %d",s=tt*x);
	}
}
