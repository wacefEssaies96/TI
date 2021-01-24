#include<stdio.h>
#include<stdlib.h>
typedef struct cellule{
    int info;
    struct cellule * suivant;
}cellule;
typedef cellule * pile;
void creer_pile(pile *p){
    *p=NULL;
}
int vide_pile(pile p){
    return(p==NULL);
}
int sommet_pile(pile p){
    if(!vide_pile(p)){
        return(p->info);
    }
    else{
        return -1;
    }
}
void empiler(pile *p,int x){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->info=x;
    n->suivant=*p;
    *p=n;
}
void depiler(pile *p){
    if(!vide_pile(*p)){
        cellule * ptr;
        ptr=*p;
        *p=ptr->suivant;
        free(ptr);
    }
    else{
        printf("nop!\n");
    }
}
void afficher_pile(pile *p){
    pile pp;
    creer_pile(&pp);
    while(!vide_pile(*p)){
        printf("%d\n",sommet_pile(*p));
        empiler(&pp,sommet_pile(*p));
        depiler(p);
    }
    while(!vide_pile(pp)){
        empiler(p,sommet_pile(pp));
        depiler(&pp);
    }
}
pile inverse_pile(pile p){
    pile pp;
    pile ppp;
    creer_pile(&pp);
    creer_pile(&ppp);
    while(!vide_pile(p)){
        empiler(&pp,sommet_pile(p));
        empiler(&ppp,sommet_pile(p));
        depiler(&p);
    }
    while(!vide_pile(pp)){
        empiler(&p,sommet_pile(pp));
        depiler(&pp);
    }
    return (ppp);
}
pile copie_pile(pile p){
    pile pp;
    pile ppp;
    creer_pile(&pp);
    creer_pile(&ppp);
    while(!vide_pile(p)){
        empiler(&pp,sommet_pile(p));
        depiler(&p);
    }
    while(!vide_pile(pp)){
        empiler(&p,sommet_pile(pp));
        empiler(&ppp,sommet_pile(pp));
        depiler(&pp);
    }
    return (ppp);
}
int taille_pile(pile p){
    pile pAux;
    creer_pile(&pAux);
    int taille=0;
    while(!vide_pile(p)){
        empiler(&pAux,sommet_pile(p));
        depiler(&p);
        taille++;
    }
    while(!vide_pile(pAux)){
        empiler(&p,sommet_pile(pAux));
        depiler(&pAux);
    }
    return (taille);
}
void permute_pile(pile *p){
    pile pAux;
    creer_pile(&pAux);
    int aux=sommet_pile(*p);
    depiler(p);
    while(!vide_pile(*p)){
        empiler(&pAux,sommet_pile(*p));
        depiler(p);
    }
    empiler(p,aux);
    aux=sommet_pile(pAux);
    depiler(&pAux);
    while(!vide_pile(pAux)){
        empiler(p,sommet_pile(pAux));
        depiler(&pAux);
    }
    empiler(p,aux);
}
int main(){
    pile p;
    pile inversee_pilee;
    pile copie;
    int x,i=1;
    creer_pile(&p);
    while(i<5){
        printf("donner x : ");
        scanf("%d",&x);
        empiler(&p,x);
        i++;
    }
    //afficher_pile(&p);
    copie=copie_pile(p);
    inversee_pilee=inverse_pile(p);
    printf("\npile copie\n");
    afficher_pile(&copie);
    printf("\npile inverse\n");
    afficher_pile(&inversee_pilee);
    printf("taille : %d\n",taille_pile(p));
    permute_pile(&p);
    afficher_pile(&p);
    printf("t3ada!");


}
