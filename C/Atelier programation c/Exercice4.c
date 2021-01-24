#include<stdio.h>
void lire_tab(int tab[],int n){
		int *P=NULL;
		for(P=tab;P<tab+n;P++){
			printf("donner la valeur de T[%d] : ",P-tab+1);
			scanf("%d",P);
		}
}
void affichage_tab(int tab[],int n){
	int *P=NULL;
		for(P=tab;P<tab+n;P++){
			printf("T[%d]=%d\n",P-tab+1,*P);
		}
	}
void ajout(int tab[],int tab2[],int n1,int n2){
	int *P=NULL;
	int *P1=NULL;

	for(P=tab+n1,P1=tab2;P<tab+n1+n2;P++,P1++){
		*P=*P1;
	}
}
int main(){
	int n=6;
	int m=4;
	int v=n+m;
	int A[v];
	int B[m];

	lire_tab(A,n);
	printf("Tableau A : \n");
	affichage_tab(A,n);
	lire_tab(B,m);
	printf("Tableau B : \n");
	affichage_tab(B,m);
	ajout(A,B,n,m);
	printf("Tableau A : \n");
	affichage_tab(A,m+n);
}
