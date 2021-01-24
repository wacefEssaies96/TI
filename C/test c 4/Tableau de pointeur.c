#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *JOUR[5];
    //int *T[]={"dimanche","lundi","mardi","mercredi","jeudi","vendredi","samedi"};
    char **p=NULL;
    //int n=strlen(*JOUR);
    //printf("n=%d\n",n);
    /*for(p=JOUR;p<JOUR+n;p++){
        printf("%s\n",*p);
    }*/
    for(p=JOUR;p<JOUR+4;p++){
        printf("donner une chaine : ");
        scanf("%s",p);
    }
    for(p=JOUR;p<JOUR+4;p++){
        printf("%s\n",*p);
    }
}
