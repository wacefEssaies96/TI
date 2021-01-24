#include<stdio.h>
int calcul(int *a,int *b)
{
	printf("le qution : %.1f\n",float(*a)/(*b));
	printf("le reste : %d\n",*a%*b);	
	
}

main()
{
	int a,b;
	printf("donner a : ");
	scanf("%d",&a);
	printf("donner b : ");
	scanf("%d",&b);
	
	calcul(&a,&b);
	
}
