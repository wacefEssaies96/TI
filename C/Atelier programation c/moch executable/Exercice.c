#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rempl_tab(char **T){
    char ch[200];
    char **P=NULL;
    char **P1=NULL;
    for(P=T,P1=P;P<T+10;P++,P1++){
       do{
            printf("Donner la chaine %d : ",P-T+1);
            scanf("%s",ch);
        }while(strlen(ch)+1>201);
        //P=(char**)malloc((strlen(ch)+1)*sizeof(char*));
        strcpy(**P,ch);
    }
}
void affiche_tab(char **T){
    char *p;
    for(p=T;p<T+10;p++){
        printf("%s\n",*p);
    }
}
int main(){
    char *T[10];

    rempl_tab(T);
    affiche_tab(T);
}
