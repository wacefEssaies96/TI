#include<stdio.h>
#include<stdlib.h>
typedef struct Etudiant{
    int num;
    char nom[20];
    char prenom[20];
    float moyenne;
}Etudiant;
typedef struct Cellule{
    Etudiant Etudiant;
    struct Cellule *suivant;
}Cellule;
typedef Cellule*Liste;

void saisieEtudiant(Cellule *p){
    printf("Donner le numero : ");
    scanf("%d",&p->Etudiant.num);
    printf("Donner le nom : ");
    scanf("%s",p->Etudiant.nom);
    printf("Donner le prenom : ");
    scanf("%s",p->Etudiant.prenom);
    printf("Donner la moyenne : ");
    scanf("%f",&p->Etudiant.moyenne);
}
void afficherEtudiant(Cellule p){
    printf("Num : %d\n",p.Etudiant.num);
    printf("Nom : %s\n",p.Etudiant.nom);
    printf("Prenom : %s\n",p.Etudiant.prenom);
    printf("Moyenne : %2f\n",p.Etudiant.moyenne);
}
void init_Liste(Liste *L){
    *L=NULL;
}
int listeVide(Liste L){
    return(L==NULL);
}
void Ajout_Debut(Liste *L){
    Cellule *n;
    n=(Cellule*)malloc(sizeof(Cellule));
    saisieEtudiant(n);
    n->suivant=*L;
    *L=n;
}
void Ajout_Fin(Liste *L){
    Cellule *n,*p;
    n=(Cellule*)malloc(sizeof(Cellule));
    saisieEtudiant(n);
    n->suivant=NULL;

    if(*L!=NULL){
        p=*L;
        while(p->suivant!=NULL){
            p=p->suivant;
        }
        p->suivant=n;
    }
    else{
        *L=n;
    }
}
Liste recherche(Liste L,int num){
    while(L!=NULL){
        if(num==L->Etudiant.num){
            return L;
        }
        L=L->suivant;
    }
    if(L==NULL){
        return (NULL);
    }
}
void insererMillieu(Liste *L){
    Cellule *n,*p;
    p=recherche(*L,123);
    if(p!=NULL){
        n=(Cellule*)malloc(sizeof(Cellule));
        saisieEtudiant(n);
        n->suivant=p->suivant;
        p->suivant=n;
    }
    else{
        printf("inexistant ! \n");
    }
}
void supprimer(Liste *L){
    Cellule *p,*pr;
    p=*L;
    pr=recherche(*L,2);
    if(pr!=NULL){
        if(*L==pr){
            *L=pr->suivant;
            free(pr);
        }
        else{
            while(p->suivant!=pr){
                p=p->suivant;
            }
            p->suivant=pr->suivant;
            free(pr);
        }
    }
    else{
        printf("inexistant ! \n");
    }
}
void Affiche_Etudiants(Liste L){
    while(L!=NULL){
        afficherEtudiant(*L);
        L=L->suivant;
    }
}
int compteurCellule(Liste L){
    int i=0;
    while(L!=NULL){
        i++;
        L=L->suivant;
    }
    return i;
}
void permute_etudiant(Etudiant *e1,Etudiant *e2){
    Etudiant aux;
    aux=*e1;
    *e1=*e2;
    *e2=aux;
}
void permuteListe(Liste *L,int num1,int num2){
    Cellule *p=recherche(*L,num1);
    Cellule *pp=recherche(*L,num2);;
    //p=recherche(*L,num1);
    //pp=recherche(*L,num2);
    permute_etudiant(&p->Etudiant,&pp->Etudiant);

}
int main(){
    int compteur;
    Liste L;
    init_Liste(&L);
    Ajout_Debut(&L);
    Ajout_Fin(&L);
    //insererMillieu(&L);
    //supprimer(&L);

    Affiche_Etudiants(L);
    permuteListe(&L,2,3);
    printf("\n\n ehmememme\n");
    Affiche_Etudiants(L);
   // printf("Nombre de cellules : %d",compteurCellule(L));
}

