#include<stdio.h>
void permutation(int *x,int *y){
	int b;
	b=*x;
	*x=*y;
	*y=b;
}


main(){
	int x,y;
	
	printf("donner x  et y : ");
	scanf("%d %d",&x,&y);
	
	printf("x ==> %d\ny ==> %d \n",x,y);
	
	permutation(&x,&y);
	
	printf("x ==> %d\ny ==> %d \n",x,y);
	
}
