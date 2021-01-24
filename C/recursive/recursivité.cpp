#include<stdio.h>
/* s=1+2+3...+n */
int somme(int n){
	if(n==0){
		return (0);
	}
	else{
		return (n+somme(n-1));
	}		
}
main()
{
	int n;
	
	printf("donner n : ");
	scanf("%d",&n); 
	
	
	printf("somme = %d ",somme(n));
}
