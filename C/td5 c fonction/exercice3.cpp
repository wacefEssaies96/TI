#include<stdio.h>
int min(int a,int b,int c,int d){
	int mini=a;
//	if(mini>a){
//		mini=a;
//	}
	if(mini>b){
		mini=b;
	}
	if(mini>c){
		mini=c;
	}	
	if(mini>d){
		mini=d;
	}
	return mini;
}
int max(int a,int b,int c,int d){
	int maxi=0;
	if(maxi<a){
		maxi=a;
	}
	if(maxi<b){
		maxi=b;
	}
	if(maxi<c){
		maxi=c;
	}	
	if(maxi<d){
		maxi=d;
	}
	return maxi;
}

main()
{
	int a,b,c,d;
	int mini;
	int maxi;
	
	printf("donner a, b, c et d : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	mini=min(a,b,c,d);
	maxi=max(a,b,c,d);
	
	printf("min=%d\n",mini);
	printf("max=%d\n",maxi);
	
}
