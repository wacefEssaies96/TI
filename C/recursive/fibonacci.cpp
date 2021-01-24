#include<stdio.h>
int fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(n>=2){
		return (fibo(n-1)+fibo(n-2));
	}
}
main(){
	int n;
	printf("donner n : ");
	scanf("%d",&n);
	printf("suite de Fibonacci : %d",fibo(n));
}
