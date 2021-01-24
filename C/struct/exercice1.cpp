#include<stdio.h>
typedef struct date{
	int jj;
	int mm; 
	int aa;
}datee;
date T[20];

main(){
	datee date;
	printf("donner  jj/mm/aaaa : \n");
	scanf("%d %d %d",&date.jj,&date.mm,&date.aa);
	
	printf("la date est %d/%d/%d",date.jj,date.mm,date.aa);
	
}
