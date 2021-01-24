#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
typedef struct test{
    int var;
    int var2;
    char ch[20];
}test;
test T[MAX];
void saisie(int *n,test T[]){
    int i;
    printf("Donner n : ");
    scanf("%d",n);
    for(i=0;i<*n;i++){
        printf("Donner var : ");
        scanf("%d",&T[i].var);
        printf("Donner var2 : ");
        scanf("%d",&T[i].var2);
        printf("Donner ch : ");
        scanf("%s",T[i].ch);
    }
}
void affich(int n,test T[n]){
    int i;
    for(i=0;i<n;i++){
        printf("var : %d\n",T[i].var);
        printf("var2 : %d\n",T[i].var2);
        printf("ch : %s\n",T[i].ch);
    }
}
void import(int n,test T[n]){
    FILE *fichier[n];
    test *p;
    int i;
    p=T;
    char ch[50]={0};
    for(i=0,p=T;i<n;i++,p++){
        sprintf(ch,"test %d.txt",i+1);
        fichier[i]=fopen(ch,"r");
        fscanf(fichier[i],"%d",&p->var);
        fscanf(fichier[i],"%d",&p->var2);
        fscanf(fichier[i],"%s",p->ch);
    }
}
int main(){
    int n=3;
    //saisie(&n,T);
    import(n,T);
    affich(n,T);



}
