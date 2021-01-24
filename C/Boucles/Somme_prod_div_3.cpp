#include<stdio.h>
main()
{
	int somme,prod,n,i,d;
	
	printf("donner le nombre de donnee ; ");
	scanf("%d",&n);
	
	i=0;
	somme=0;
	prod=1;
	
	do
	{
		printf("donner le nombre %d : ",i+1);
		scanf("%d",&d);
		somme+=d;
		prod*=d;
		i++;
	}
	while(i<n);
	printf("la somme est : %d,le produit est : %d et la moyenne est : %f",somme,prod,(float)somme/n);
}
