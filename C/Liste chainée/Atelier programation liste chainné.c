#include<stdio.h>
#include<stdlib.h>
typedef struct etudiant{
    int num_insc;
    char nom[20];
    char prenom[20];
    float moyenne;
}etudiant;
typedef struct cellule{
    etudiant etudiant;
    struct cellule*suivant;
}cellule;
typedef cellule*liste;

void creerListe(liste *l){
    *l=NULL;
}

void saisieEtudiant(cellule *n){
    printf("Donner le num d'inscription : ");
    scanf("%d",&n->etudiant.num_insc);
    printf("Donner le nom : ");
    scanf("%s",n->etudiant.nom);
    printf("Donner le prenom : ");
    scanf("%s",n->etudiant.prenom);
    printf("Donner la moyenne : ");
    scanf("%f",&n->etudiant.moyenne);
}
void affiche_etudiant(cellule *n){
    printf("Num d'inscription : %d\n",n->etudiant.num_insc);
    printf("Nom : %s\n",n->etudiant.nom);
    printf("Prenom : %s\n",n->etudiant.prenom);
    printf("Moyenne : %f\n",n->etudiant.moyenne);
}
void insererEntete(liste *l){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    saisieEtudiant(n);
    n->suivant=*l;
    *l=n;
}
void insererQueue(liste *l){
    cellule *n,*p;

    n=(cellule*)malloc(sizeof(cellule));
    saisieEtudiant(n);
    n->suivant=NULL;

    if(*l!=NULL){
        p=*l;
        while(p->suivant!=NULL){
            p=p->suivant;
        }
        p->suivant=n;
    }
    else{
        *l=n;
    }
}
void affichage(liste l){
    cellule *n;
    n=l;
    while(n!=NULL){
        affiche_etudiant(n);
        n=n->suivant;
    }
}
int main(){
    liste l;

    creerListe(&l);
    insererEntete(&l);
    insererQueue(&l);
    affichage(l);
}
