#include<stdio.h>
#include<stdlib.h>
typedef struct cellule{
    int code;
    char libelle[20];
    struct cellule*suivant;
    struct cellule*precedent;
}cellule;
typedef struct listd{
    cellule *premier;
    cellule *dernier;
}listd;
listd ld;
void liste_vide(listd *ld){
    ld->premier=NULL;
    ld->dernier=NULL;
}
int verif_list(listd ld){
    return((ld.premier==NULL)&&(ld.dernier==NULL));
}
void saisir_produit(cellule *p){
    printf("donner le code : ");
    scanf("%d",&p->code);
    printf("Donner le libelle : ");
    scanf("%s",p->libelle);
}
void affiche_cellule(cellule p){
    printf("Code : %d\n",p.code);
    printf("libelle : %s\n",p.libelle);
}
void inserer_entete(listd *ld){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    saisir_produit(n);
    n->suivant=ld->premier;
    n->precedent=NULL;
    if(verif_list(*ld)){
        ld->dernier=n;
    }
    ld->premier=n;
}
void inserer_queue(listd *ld){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    saisir_produit(n);
    n->suivant=NULL;
    n->precedent=ld->dernier;
    ld->dernier->suivant=n;
    if(verif_list(*ld)){
        ld->premier=n;
    }
}
void afficher_list(listd ld){
    cellule *p;
    p=ld.premier;
    while(p!=NULL){
        affiche_cellule(*p);
        p=p->suivant;
    }
}
void supprimer_fin(listd *ld){
    if(!verif_list(*ld)){
        cellule *p=NULL;
        p=ld->dernier;
        ld->dernier=p->precedent;
        if(ld->dernier!=NULL){
                printf("est null\n");
            ld->dernier->suivant=NULL;
        printf("null\n");
        }
        else{
            ld->premier=NULL;
        }
        printf("liberation\n");
        free(p);
    }
}
void trouver(listd ld){
    int x=123;
    int test=0;
    cellule *p;
    p=ld.premier;
    while(p!=NULL){
        if(x==p->code){
            affiche_cellule(*p);
            test=1;
        }
        p=p->suivant;
    }
    if(test=0){
            printf("introuvable ! \n");
    }

}
int main(){
    listd ld;
    liste_vide(&ld);
    verif_list(ld);
    inserer_entete(&ld);
     inserer_entete(&ld);
    //inserer_queue(&ld);
    supprimer_fin(&ld);
    afficher_list(ld);
    //trouver(ld);
}
