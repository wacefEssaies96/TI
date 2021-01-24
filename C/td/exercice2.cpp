#include<stdio.h>
int multi_deux(int x){
	int d;
	d=x%2;
	if(d==0){
		return 1;
	}
	else{
		return 0;
	}
}
int multi_trois(int x){
	int d;
	d=x%3;
	if(d==0){
		return 1;
	}
	else{
		return 0;
	}
}
int multi_six(int x){
	int d;
	d=x%6;
	if(d==0){
		return 1;
	}
	else{
		return 0;
	}
}

main(){
	int x,d,t,s;
	
	printf("donner un entier : ");
	scanf("%d",&x);
	d=multi_deux(x);
	t=multi_trois(x);
	s=multi_six(x);
	if(d==1){
		printf("%d est un multiple de 2 ! \n",x);
	}
	if(t==1){
		printf("%d est un multiple de 3 ! \n",x);
	}
	if(s==1){
		printf("%d est un multiple de 6 ! \n",x);
	}
	
	
}
