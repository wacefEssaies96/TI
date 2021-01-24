#include <stdio.h>
#include <conio.h>
main()
{
	int i,n,somme,prod,moyenne,d;
	
	do
	{
	printf("donner le nombre de donnee : ");
	scanf("%d",&n);
	}
	while(n<1||n>15);
	
	
	for(i=0,somme=0,prod=1;i<n;i++)
	{
		printf("donner le nombre %d : ",i+1);
		scanf("%d",&d);
		somme+=d;
		prod*=d;
	}
	
	printf("la somme est : %d,le produit est : %d et la moyenne est : %f",somme,prod,(float)somme/n);
	
	
	
	getch();
}

