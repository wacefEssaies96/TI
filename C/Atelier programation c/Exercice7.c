#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void lire_tab(char tab[]){
    printf("Donnez une chaine : ");
    scanf("%s",tab);
}
void affiche_tab(char tab[]){
    printf("%s\n",tab);
}
void ajout_ch(char ch1[],char ch2[]){
    char *P=NULL;
    char *P1=NULL;
    int n1=strlen(ch1)+1;
    int n2=strlen(ch2)+1;
    for(P=ch1+n1-1,P1=ch2;P<ch1+n1+n2;P++,P1++){
        *P=*P1;
    }
}
int main(){

    char ch1[50];
    char ch2[50];

    lire_tab(ch1);
    affiche_tab(ch1);
    lire_tab(ch2);
    affiche_tab(ch2);
    printf("Ajout de la chaine 2 a la chaine 1 : \n");
    ajout_ch(ch1,ch2);
    affiche_tab(ch1);
}

