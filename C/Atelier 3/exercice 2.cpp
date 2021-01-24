#include<stdio.h>
main()
{
	int n1,n2,c;
	
	printf("donner un entier : ");
	scanf("%d",&n1);
	
	printf("donner un entier 2 : ");
	scanf("%d",&n2);
	
	printf("1 : somme\n2 : soustraction\n3 : multiplication\n4 : division\nveuillez choisir un nombre : ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1 :
			printf("la somme est : %d ",n1+n2);
			break;
		case 2 :
			printf("soustraction : %d ",n1-n2);
			break;
		case 3 :
			printf("multiplacation : %d ",n1*n2);
			break;
	}
	if(c==4)
	{
		printf("division : %f ",float (n1/n2));
	}
	
	
		
}
