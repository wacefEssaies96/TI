#include<stdio.h>
int max(int a,int b){
	int max;
	if (a>b){
		max=a;
	}
	else{
		max=b;
	}
	return max;
}

int min(int a,int b){
	int min;
	if (a<b){
		min=a;
	}
	else{
		min=b;
	}
	return min;
}

main(){
	int x,y,z,w;
	int maxi1,mini1;
	int maxi2,mini2;

	printf("donner 4 entier : ");
	scanf("%d %d %d %d",&x,&y,&z,&w);
	
	maxi1=max(x,y);
	mini1=min(x,y);
	maxi2=max(z,w);
	mini2=min(z,w);
	
	if(maxi1>maxi2){
		printf("max : %d ! \n",maxi1);
	}
	else{
		printf("max : %d ! \n",maxi2);
	}
	if(mini1<mini2){
		printf("min : %d ! \n",mini1);
	}
	else{
		printf("min : %d ! \n",mini2);
	}
	
//	printf("max : %d\n",max(x,y));
//	printf("min : %d\n",min(x,y));
	
	
}
