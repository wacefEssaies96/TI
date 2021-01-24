#include<stdio.h>
int fact(int a){
	int fac=1;
	if(a>0){
		for(int i=1;i<=a;i++){
			fac*=i;
		}
	}
	else{
		fac=1;
	}
	return fac;
}
int puissance(int x,int p){
	int res=0;
	if(p==1){
		res=x;
	}
	if(p==0){
		res=1;
	}
	if(p>1){
		for(int i=0;i<p-1;i++){
			if(i==0){
				res+=x*x;
			}
			else{
				res*=x;
			}
		}
	}
	return res;
}
int fct_somme(int x,int n){
	int somme=0;
	int i;
	for(i=0;i<=n;i++){
		somme+=puissance(x,i)/fact(i);			
	}
	printf("somme : %d !\n",somme);
	
}




main(){
	int x,n,a;
	
	printf("donenr x et n : ");
	scanf("%d %d",&x,&n);
	fct_somme(x,n);
	
	
	
}
