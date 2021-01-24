#include<stdio.h>
main()
{
	int n=4;
	int ts[n]={2,1,4,3};
	int tj[n];
	int i;
	int x=0,max=0;
	
	for(i=0;i<n;i++){
		tj[i]=ts[i];	
	}
	for(i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(ts[j]>ts[i])
			{
				x=ts[i];
				ts[i]=ts[j];
				ts[j]=x;
			}
		}
	}
	printf("le classements : \n");
	for(i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if((i==0)&&(ts[0]==tj[j])){
				printf("bravo joueur %d est le gagnant\n",j+1);
			}
//			if(ts[i]==tj[j]){
//				printf("joueur : %d ==> score : %d\n",j+1,ts[i]);
//			}
//			if((i+1)==n){
//				printf("joueur : %d ==> score : %d\n",n,ts[i]);
//			}
		}
	}
	
	
	
	
	
	for(i=0;i<n;i++){
		printf("%d \n",ts[i]);
	}	
	
	
}


