#include<stdio.h>
#include<stdlib.h>

typedef struct cellule{
    int entier;
    struct cellule * suivant;
}cellule;
cellule cl1,cl2,cl3;
//cellule *L;



void main(){
    cellule*p=NULL;
    p=malloc(sizeof(cellule));
    p->entier=1;
}
