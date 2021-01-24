#include<stdio.h>
#include<conio.h>
void saisie(int *n1,int *n2)
{
	printf("donner deux nombre : ");
	scanf("%d %d",n1,n2);
}
void menu(int *c,int *n1,int *n2)
{
	printf("choisir l'operation : \n");
	printf("1| : %d + %d = ?\n",*n1,*n2);
	printf("2| : %d - %d = ?\n",*n1,*n2);
	printf("3| : %d * %d = ?\n",*n1,*n2);
	printf("4| : %d / %d = ?\n",*n1,*n2);
	scanf("%d",c);
}
void operation(int *c,int *n1,int *n2)
{
	if(*c==1)
	{
		printf("%d + %d = %d",*n1,*n2,(*n1+*n2));
	}
	if(*c==2)
	{
		printf("%d - %d = %d",*n1,*n2,(*n1-*n2));
	}
	if(*c==3)
	{
		printf("%d * %d = %d",*n1,*n2,(*n1 * *n2));
	}
	if(*c==4)
	{
		printf("%d / %d = %f",*n1,*n2,float(*n1 / *n2));
	}
	
}

int main()
{
	int n1,n2,c;
	
	saisie(&n1,&n2);
	menu(&c,&n1,&n2);
	operation(&c,&n1,&n2);
	
	getch();
	return 0;
}
