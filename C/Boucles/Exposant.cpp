#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,resultat,x;
	
	printf("donner un nombre : ");
	scanf("%d",&x);
	printf("donne son exposant : ");
	scanf("%d",&n);
	
	resultat=1;
	
	for(i=1;i<=n;i++)
	{
		resultat=resultat*x;
	}
	if(((x==0)&&(n==0))||(n==0))
	{
		printf("invalid !");
	}
	else{
	
	printf("le resultat est : %d",resultat);
	}


	getch();
}
