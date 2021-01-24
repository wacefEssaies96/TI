#include<stdio.h>
float puissance(int x,int p){
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

main(){
	int p;
	float x;
	float res;
	printf("donner un reel : ");
	scanf("%f",&x);
	printf("donne un entier (puissance) : ");
	scanf("%d",&p);

	
	printf("%.1f",puissance(x,p));
}
