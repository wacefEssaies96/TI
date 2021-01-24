#include<stdio.h>
#include<stdlib.h>

typedef struct produit{
    int code;
    //char libelle[20];
}produit;
typedef struct cellule{
    produit pr;
    struct cellule * suivant;
}cellule;
typedef cellule * pile;
void init_pile(pile *p){
    *p=NULL;
}
int pile_vide(pile p){
    return(p==NULL);
}
void remplissage(produit *pr){
    printf("donner le code : ");
    scanf("%d",&pr->code);
}
void empiler(pile *p,int x){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->pr.code=x;
    //remplissage(&(n->pr));
    n->suivant=*p;
    *p=n;
}
int sommet(pile p){
    if(!pile_vide(p)){
        return(p->pr.code);
    }
    else{
        return -1;
    }
}
void depiler(pile *p){
    if(!pile_vide(*p)){
        cellule *n;
        n=*p;
        *p=n->suivant;
        free(n);
    }
    else
        printf("impossible ! ");
}
void affichage(pile *p){
    if(!pile_vide(*p)){
        pile pp;
        init_pile(&pp);
        while(!pile_vide(*p)){
            printf("%d\n",sommet(*p));
            empiler(&pp,sommet(*p));
            depiler(p);
        }
        while(!pile_vide(pp)){
            empiler(p,sommet(pp));
            depiler(&pp);
        }
    }
    else {
        printf("vide ! \n");
    }
}
int main(){
    pile p;
    init_pile(&p);
    int i=1;
    int x;

    while(i<5){
        printf("Donner le code : ");
        scanf("%d",&x);
        empiler(&p,x);
        i++;
    }
    affichage(&p);

}
