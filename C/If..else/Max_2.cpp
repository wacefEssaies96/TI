#include<stdio.h>
main()
{
	int a,b,c,max;
	
	printf("donner la valeur de A : ");
	scanf("%d",&a);
	printf("donner la valeur de B : ");
	scanf("%d",&b);
	printf("donner la valeur de C : ");
	scanf("%d",&c);
	
	max=(a>b) ? a : b;
	max=(max>c) ? max : c;
	
	printf("%d",max);
}
