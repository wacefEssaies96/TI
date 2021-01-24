#include<stdio.h>
void permuter(int *a,int *b){
	int x=0;
	x=*a;
	*a=*b;
	*b=x;
	printf("a:%d\nb:%d",*a,*b);
}
int main(){
	int x,y;
	printf("donner a : ");
	scanf("%d",&x);
	printf("donner b : ");
	scanf("%d",&y);
	permuter(&x,&y);
}
