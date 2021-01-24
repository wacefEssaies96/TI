#include<stdio.h>

int ope(int tab[4])
{
	int n1,n2;
	printf("donner n1 : ");
	scanf("%d",&n1);
	
	printf("donnner n2 : ");
	scanf("%d",&n2);
	
	tab[0]=n1+n2;
	tab[1]=n1-n2;
	tab[2]=n1*n2;
	tab[3]=float(n1/n2);
	
	return(tab[4]);	
}

main()
{
	int tab[4];
	ope(tab);	
	for(int i=0;i<4;i++)
	{
		printf("%d\n",tab[i]);	
	}
}
