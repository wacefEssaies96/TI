#include<stdio.h>

int somme_Un(int n){
	if(n==0){
		return(0);
	}
	else{
		return(n*n*n*n+somme_Un(n-1));
	}
	
}
main(){
	int n;
	printf("donner n : ");
	scanf("%d",&n);
	printf("la somme de Un est : %d ",somme_Un(n));
}
