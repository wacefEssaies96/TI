#include<stdio.h>
void rempl_tab(int n,int A[]){
    int *ptr=NULL;
    for(ptr=A;ptr<A+n;ptr++){
        printf("Donner l'elt A[%d] : ",ptr-A+1);
        scanf("%d",ptr);
    }
}
void occurence(int x,int A[],int n){
	int *P=NULL;
	for(P=A;P<A+n;P++){
		if(x==*P){
			*P=0;
		}
	}
	int *P1=NULL;
	int v=0;
	for(P=A;P<A+n;P++){
		if(*P==0){
			for(P1=P;P1<A+n;P1++){
				if(*P1!=0){
					v=*P1;
					*P1=0;
					*P=v;
					break;
				}
			}
		}
	}
}
void affichage_tab(int A[],int n){
    int *P=NULL;
    int compteur=0;
    for(P=A;P<A+n;P++){
        if(*P==0){
            compteur+=1;
        }
    }
    for(P=A;P<A+n-compteur;P++){
		printf("%d",*P);
	}
	printf("\n");
}
int main(){

	int x,n=0;
	int A[n];

	printf("donner la taille du tableau : ");
	scanf("%d",&n);

	rempl_tab(n,A);
	affichage_tab(A,n);
	printf("Donner l'elt a chercher : ");
	scanf("%d",&x);
	occurence(x,A,n);
	affichage_tab(A,n);
}
