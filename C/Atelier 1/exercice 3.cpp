#include<stdio.h>

main()

{
	int x,y;
	
	printf("donner un nombre: ");
	scanf("%d",&x);
	
	if (x<0)
	{
		y=x*(-1);
		printf("la valeur absolue du %d est : %d",x,y);
	}else{
		printf("la valeur absolue du %d est : %d",x,x);;
	}
		
}
