#include<stdio.h>
void classement(int *n,int ts[],int tj[]){
	int x=0;
	int x2=0;
	for(int i=0;i<*n;i++){
		tj[i]=ts[i];	
	}
	for(int i=0;i<*n;i++){
		printf("%d ",tj[i]);	
	}
	printf("\n");
	for(int i=0;i<*n;i++){
		for(int j=i;j<*n;j++){
			if(ts[j]>ts[i])
			{
				x=ts[i];
				ts[i]=ts[j];
				ts[j]=x;
			}
		}
	}
	for(int i=0;i<*n;i++){
		printf("%d ",ts[i]);	
	}
	printf("\n");
	
	for(int i=0;i<*n;i++){
		for(int j=i;j<*n;j++){
			if((i==0)&&(ts[0]==tj[j])){
				printf("bravo joueur %d est le gagnant\n\n",j+1);
				break;
			}
		}
//		printf("score %d\n",ts[i]);
	}
	printf("le classements : \n\n");
		for(int j=0;j<*n;j++){
			printf("joueur %d ==> score %d\n",j+1,tj[j]);
		}
	
	
	
//	if((i==0)&&(ts[i]==tj[j])){
//				printf("bravo joueur %d est le gagnant\n",j+1);
//			}
			
//	printf("scores : \n");
//	for(int i=0;i<*n;i++){
//		for(int j=i;j<*n;j++){	
//			printf("joueur %d : %d\n",j+1,ts[i]);
//		}
//	}
}
int main(){
	int n=5;
	int tj[n]={0,1,0,0,1};
	int ts[n]={6,5,9,9,4};
	classement(&n,ts,tj);
}
