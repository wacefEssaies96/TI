#include<stdio.h>
#include<conio.h>
main()
{
	int s,n,t,k,b;
	
	printf("donner le nombre d'heur de travaille : ");
	scanf("%d",&n);
	printf("donner le tarifs horaire : ");
	scanf("%d",&t);
	
	if (n<0)
	{
		printf("nombre d'heur de travaille invalide !");
	}
	else if (n<=39)
	{
		k=1;
		b=k*t;
		printf("le salaire est : %d",s=b*n);
	}
	else if ((n<=44)&&(n>=40))
	{
		printf ("le salaire est : %d",s=n*(t*1.2));
	}
	else if ((n>=45)&&(n<=49))
	{
		printf ("le salaire est : %d",s=n*(t*1.5));
	}
	else 
	{
		printf("le salaire est : %d",s=n*(t*2));
	}
	
}
