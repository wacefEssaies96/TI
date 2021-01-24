#include<stdio.h>
int somme(int a, int b)
{
	printf("donner a : ");
	scanf("%d",&a);
	printf("donner b : ");
	scanf("%d",&b);
	return (a+b);
}
int main()
{
int s,a,b;
printf("%d",somme(a,b));
return 0;
}
