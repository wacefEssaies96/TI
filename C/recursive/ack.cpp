#include<stdio.h>
int ack(int n,int m){
	if(n==0){
		return (ack(n,m+1));
	}
	if((n>0)&&(m==0)){
		return (ack(m-1,1));
	}
	if((n>0)&&(m>0)){
		return ack(n-1,m-1);
	}
}
main(){
	int n,m;
	printf("donner n et m : ");
	scanf("%d %d",&n,&m);
	printf("%d ",ack(n,m));
}
