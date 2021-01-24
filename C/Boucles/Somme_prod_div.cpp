#include <stdio.h>
main()
{
 
 	int i,n,d,somme,prod;
 	float moyenne;
 
 	printf("donner le nombre de donner : ");
 	scanf("%d",&n);
 	i=0;
 	somme=0;
 	prod=1;
 	while(i<n)
 	{
 		printf("donner le nombre %d : ",i+1);
 		scanf("%d",&d);
		somme+=d;
		prod*=d; 	
		i++;	 
	}
	moyenne=somme/n;
	printf("la somme est : %d,le produit est : %d et la moyenne est : %f",somme,prod,moyenne);
}
