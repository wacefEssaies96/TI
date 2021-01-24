#include<stdio.h>
void fct(int *x,int *y,int *z){
	*x=1;
	*y=1;
	*z=1
}
int fct2(int i){
	
	return fct(i)+1;
} 
main(){
	int i,j;
	int x=0,y=0,z=0;
	printf("%d",fct2(j));
	
}
