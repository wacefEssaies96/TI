#include<stdio.h>
int puissance(int a,int p)
{
	int res;
//	printf("a %d\n p %d\n",a,p);
	for(int i=0;i<p-1;i++)
	{
		res+=a*a;
	}
	return res;
}

main()
{
	int a;
	int p;
	int resultat;
	puts("donner a : ");
	scanf("%d",&a);
	puts("donner la puissance : ");
	scanf("%d",&p);
	resultat=puissance(a,p);
	printf("puissance : %d",resultat);
	
		
}

