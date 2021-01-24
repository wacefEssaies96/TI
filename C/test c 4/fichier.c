#include<stdio.h>
#include<stdlib.h>

void Sauvgarde(int T[],int n){
    int m=3;
    FILE *p[m];
    int i;
    char ch[50]={0};
    if(p==NULL){
        printf("Erreur ! \n");
    }
    else{
        for(i=0;i<n;i++){
            sprintf(ch,"Livre %d.txt",i+1);
            p[i]=fopen(ch,"w");
            fprintf(p[i],"%d \t",T[i]);
            fclose(p[i]);
        }
    }
}
int main(){
    int T[10];
    int n,i;
    char ch[10]={0};

    printf("Donner la taille du tableau : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Saisir l'element du tableau T[%d] : ",i+1);
        scanf("%d",&T[i]);

    }
    /*printf("Donner la chaine : ");
    scanf("%s",&ch);*/
    //for(i=0;i<n;i++){

     //   printf("%s\n",ch);
    //}
    /*printf("Saisir le nom du fichier : ");
    fflush(stdin);
    gets(ch);*/

    Sauvgarde(T,n);
    return 0;
}
