#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,s;
	
	
	printf("donner la valeur de a : ");
	scanf("%d",&a);
	printf("donener la valeur de b : ");
	scanf("%d",&b);
	if ((a>0)&&(b>0))
	{
		printf ("le resultat de la somme est positifs ! \n");
	}
	else if ((a>0)&&(b<0))
	{
		b=b*(-1);
		if (b>a)
		{
			printf ("le resultat est negatifs ! ");
		}
		else if (a==b)
		{
			printf ("le resultat est nul");
		}
		else 
		{
			printf (" le resultat est positifs ! ");
		}
	}
	else if ((a<0)&&(b>0))
	{
		a=a*(-1);
		if (a>b)
		{
			printf("le resultat est negatifs ! ");
		}
		else if (a==b)
		{
			printf ("le resultat est nul");	
		}
		else 
		{
			printf (" le resultat est positifs ! ");
		}
	}
	getch();
}
