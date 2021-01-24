#include<stdio.h>
main()
{
	int x,y,per,sur;
	
	
	printf("donner le largeur du rectangle : ");
	scanf("%d",&x);
	
	printf("donner le longeur du rectangle : ");
	scanf("%d",&y);
	
	per=(x+y)*2;
	sur=x*y;
	
	printf("le perimetre du rectangle est : %d\n",per);
	printf("la surface du rectangle est : %d\n",sur);
	
	
}
