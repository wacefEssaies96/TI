#include<stdio.h>
#include<stdlib.h>
typedef struct produit{
    int code;
    char libelle[20];
}produit;
typedef struct cellule{
    produit p;
    struct cellule * suivant;
    struct cellule * precedent;
}cellule;
typedef struct l_produit{
    cellule * premier;
    cellule * dernier;
}l_produit;
void saisirProduit(produit *p){
    printf("code : ");
    scanf("%d",&p->code);
    printf("libelle : ");
    scanf("%s",p->libelle);
}
void afficheProduit(produit p){
    printf("code : %d\n",p.code);
    printf("libelle : %s\n",p.libelle);
}
void creerListe(l_produit *l){
    l->premier=NULL;
    l->dernier=NULL;
}
int estVide(l_produit l){
    return(l.premier==NULL);
}
void ajoutDebut(l_produit *l){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    saisirProduit(&n->p);
    if(estVide(*l)){
        n->suivant=NULL;
        l->premier=n;
        l->dernier=n;
    }
    else{
        n->suivant=l->premier;
        l->premier->precedent=n;
        l->premier=n;
    }
    n->precedent=NULL;
}
void afficher_produit(l_produit l){
    cellule *pp;
    pp=l.premier;
    while(pp!=NULL){
        afficheProduit(pp->p);
        pp=pp->suivant;
    }
}
void ajoutFin(l_produit *l){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    saisirProduit(&n->p);
    if(estVide(*l)){
        l->premier=n;
        l->dernier=n;
        n->precedent=NULL;
    }
    else{
        n->precedent=l->dernier;
        l->dernier->suivant=n;
        l->dernier=n;

    }
    n->suivant=NULL;
}
void supprimerDebut(l_produit *l){
    if(!estVide(*l)){
        cellule *p;
        p=l->premier;
        l->premier=p->suivant;
        if(l->premier==NULL){
            l->dernier=NULL;
        }
        else{
            l->premier->precedent=NULL;
        }
        free(p);
    }
    else{
        printf("Nop !\n");
    }
}
void supprimerFin(l_produit *l){
    if(!estVide(*l)){

        cellule *p,*pp;
        p=l->dernier;
        pp=p->precedent;
        if(pp!=NULL){
            pp->suivant=NULL;
            l->dernier=pp;
        }
        else{
            creerListe(l);
        }
        free(p);
    }
}
void trouverProduit(l_produit l,int code){
    cellule *p;
    p=l.premier;
    int x=0;
    while((p!=NULL)&&(p->p.code==code)){
        p=p->suivant;
    }
    if(p==NULL){
        printf("introuvable ! \n");
        system("pause");
    }
    else{
        afficheProduit(p->p);
        system("pause");
    }
}
int nombre(l_produit l){
    cellule *p;
    p=l.premier;
    int n=0;
    while(p!=NULL){
        n+=1;
        p=p->suivant;
    }
    return n;
}
int main(){
    l_produit ld;
    creerListe(&ld);
    int x=1;
    int code;
    while(x>0){
        printf("--------------------GESTION PRODUIT--------------------\n");
        printf("1 : ajouter debut\n");
        printf("2 : ajouter fin\n");
        printf("3 : afficher tous\n");
        printf("4 : supprimer debut\n");
        printf("5 : supprimer fin\n");
        printf("6 : recherche\n");
        printf("7 : nombre de cellule\n");
        printf("-------------------------------------------------------\n");
        printf("choisir : ");
        scanf("%d",&x);

        switch(x){
            case 1 :
                ajoutDebut(&ld);
                break;
            case 2 :
                ajoutFin(&ld);
                break;
            case 3 :
                 afficher_produit(ld);
                 system("pause");
                 break;
            case 4 :
                supprimerDebut(&ld);
                break;
            case 5 :
                supprimerFin(&ld);
                break;
            case 6 :
                printf("donner le code a chercher : ");
                scanf("%d",&code);
                trouverProduit(ld,code);
                break;
            case 7 :
                printf("Nombre : %d",nombre(ld));
                system("pause");
            case 0 :
                printf("au revoir ! \n");
                system("pause");
                break;
        }
        system("cls");
    }
}
