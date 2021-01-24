#include<stdio.h>
void temps(int *h,int *m,int *s){
	
	if(*s==59){
		*s=00;
		if(*m==59){
			*m=00;
			*h+=1;
		}
		if(*m<59){
			*m+=1;
		}
	}
	else{
		*s+=1;
	}
	
}

main(){
	int h,m,s;
	
	printf("donner l'heur : minutes : secondes : ");
	scanf("%d %d %d",&h,&m,&s);
	
	temps(&h,&m,&s);
	printf("%d %d %d",h,m,s);
}
