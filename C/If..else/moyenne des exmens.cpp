#include<stdio.h>
#include<conio.h>
main()
{
	int x1,x2,x3,moy;
	
	printf ("donner la note de l'examens 1 : ");
	scanf("%d",&x1);
	printf("donner la note de l'examens 2 :: ");
	scanf("%d",&x2);
	printf("donenr la note de l'examen 3 : ");
	scanf("%d",&x3);
	
	moy=(x1+x2+x3)/3;
	
	if((x1>=9)&&(x2>=9)&&(x3>=9))
	{
		printf("admis");
	}
	else if ((moy>=10)&&(x1>=8)&&(x2>=8)&&(x3>=3))
	{
		printf("admis");
	}
	else 
	printf("refuser");
	
}
