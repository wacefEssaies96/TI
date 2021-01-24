#include<stdio.h>
int fct(int n){
	if(n==0){
		return 1;
	}
	else{
		return (n*fct(n-1));
	}
	
}
main(){
	int n;
	printf("donner n : ");
	scanf("%d",&n);
	
	printf("factoriele de %d! est : %d",n,fct(n));
}
