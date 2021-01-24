#include<stdio.h>
void sommeprod(int n,int t[],int *somme,int *prod){
	for(int i=0;i<n;i++){
		printf("donner le nombre %d : ",i+1);
		scanf("%d",&t[i]);
	}
	for(int i=0;i<n;i++){
		*somme+=t[i];
	}
	for(int i=0;i<n;i++){
		*prod*=t[i];
	}
	
}

main(){
	int somme=0,prod=1,n;
	int t[n];
	
	printf("donenr le nombre d'entier : ");
	scanf("%d",&n);
	
	sommeprod(n,t,&somme,&prod);
	
	printf("la somme est : %d\nle produit est : %d\n",somme,prod);
}
