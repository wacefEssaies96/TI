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
	
	if(a>b)
	
		max=a;
	
	else
	
		max=b;
	
	if (c>max)
	
		max=c;
	
	printf("la valeur maximum est : %d",max);

	
	
}
