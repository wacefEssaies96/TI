#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,somme=0;
	int moy=0;
	int T[n];
	
	printf("donner le nombre des examens : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("donner la note %d : ",i+1);
		scanf("%d",&T[i]);
	}
	for(i=0;i<n;i++)
	{
		somme+=T[i];
	}
	moy=somme/n;
	printf("la moyennse est : %d !\n",moy);	
	switch(moy)
	{
		case 10:
		case 11:
		case 12:
		case 13:
			printf("admis avec mention passable !");
			break;
		case 14:
		case 15:
		case 16:
			printf("admis avec mention bien !");
			break;
		case 17:
		case 18:
		case 19:
		case 20:	
			printf("admis avec mention tres bien !");
			break;
		default:
			printf("refuse");	
	}
	
	getch();
}
