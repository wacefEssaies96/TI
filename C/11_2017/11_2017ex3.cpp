#include<stdio.h>
#include<conio.h>
main(){
	int x=1;
	int h,i,a,j;
	printf("Donner la hauteur   ");
	scanf("%d",&h);
	printf("\n");printf("\n");
	
	while(h>0){
	for(i=1;i<h;i++){
	printf(" ");
	}a=x;
	for(j=0;j<a;j++){
	printf("%d ",x);
	x=x+1;
	}
	printf("\n");
	
	h=h-1;
	}
	
	getch();
}
