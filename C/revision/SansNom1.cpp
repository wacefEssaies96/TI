#include<stdio.h>
int fct(int ic){
	int somme1=0,somme2=0;
	int t[5];
	ic=0;
	for(int i=0;i<5;i++){
		printf("donner un entier : ");
		scanf("%d",&t[i]);
	}
	int i=0;
		while(somme2>=somme1){
		somme1=0;
		somme2=0;
		for(int j=i;j>=0;j--){
			somme1+=t[j];
		}
		for(int j=i+1;j<5;j++){
			somme2+=t[j];
		}
		if(somme1==somme2){
			ic=i+1;
			break;
		}
		if(somme1>=somme2){
			ic=i+1;
		}
	i++;	
	}
	return ic;
}
main(){
	int ic;

	printf("ic=%d",fct(ic));
	
}
