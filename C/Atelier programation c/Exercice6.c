#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rempl_tab(char *S,int *n){
        printf("donner une chaine de caractere : ");
        scanf("%s",S);
        *n=strlen(S)+1;
}
char * recherche_char(char *S,char C[],int n){
	char *P=NULL;
    char *P1=NULL;
    for(P=S,P1=C;P<S+n;P++){
        if(*P1==*P){
            return (P);
            break;
        }
        if(P+1==S+n){
            return NULL;
        }
    }
}
int compt_char(char *S,char C[],int n){
    char *P=NULL;
    char *P1=NULL;
    int compteur=0;
    for(P=S,P1=C;P<S+n;P++){
        if(*P1==*P){
            compteur+=1;
        }
    }
    return compteur;
}
int main(){
	char *S;
	char C[1];
	int n,compteur;
	char *P=NULL;

    rempl_tab(S,&n);

    printf("Donner le caractere a rechercher : ");
    scanf("%s",&C);

    P=recherche_char(S,C,n);
    if(P!=NULL){
        printf("Premiere occurence : %d\n",P-S+1);
    }
    else{
        printf("NULL\n");
    }
    compteur=compt_char(S,C,n);
    if(compteur>0){
        printf("Nombre d'occurence : %d  \n",compteur);
    }
    else{
        printf("Le caractere n'existe pas ! \n");
    }

}
