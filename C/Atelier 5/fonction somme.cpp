#include<stdio.h>
int somme(int a, int b)
{
	return (a+b);
}
int sous(int a, int b)
{
	return (a-b);
}
int multi(int a, int b)
{
	return (a*b);
}
int div(int a, int b)
{
	return (a/b);
}
int main()
{
	int a,b;
	printf("donner a : ");
	scanf("%d",&a);
	printf("donner b : ");
	scanf("%d",&b);
	printf("somme : %d\n",somme(a,b));
	printf("soustraction : %d\n",sous(a,b));
	printf("multiplication : %d\n",multi(a,b));
	printf("division : %d\n",div(a,b));
	
}
