#include<stdio.h>
#include<stdlib.h>
typedef struct etudiant{
    int numInsc ;
    char nom[20];
    char prenom[20];
    int age;
}etudiant;

typedef struct cellule{
    etudiant etudiant;
    struct cellule *next;
}cellule;
typedef cellule*liste;

void creelistevide(liste*l)
{
    *l=NULL;
}
void inserertete(liste *l){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    printf("Donner le numero d'inscription : ");
    scanf("%d",&n->etudiant.numInsc);
    printf("donner le nom  : ");
    scanf("%s",n->etudiant.nom);
    printf("donner le prenom : ");
    scanf("%s",n->etudiant.prenom);
    printf("Donner l'age : ");
    scanf("%d",&n->etudiant.age);
    n->next=*l;
    *l=n;
}
void creeretudiant(liste *l)
{
    cellule *n,*p;
    n=(cellule*)malloc(sizeof(cellule));
    printf("Donner le numero d'inscription : ");
    scanf("%d",&n->etudiant.numInsc);
    printf("donner le nom  : ");
    scanf("%s",n->etudiant.nom);
    printf("donner le prenom : ");
    scanf("%s",n->etudiant.prenom);
    printf("Donner l'age : ");
    scanf("%d",&n->etudiant.age);
    n->next=NULL;
    if(*l!=NULL)
    {
        p=*l;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=n;
    }
    else
        *l=n;
}
liste supprimerEtudiantEnTete(liste *l){
    cellule *p;
    p=*l;
    *l=p->next;
    free(p);
}
liste supprimerEtudiantEnFin(liste *l){
    cellule *n,*p;
    n=*l;
    p=*l;
    while(n->next!=NULL){
        p=n;
        n=n->next;
    }
    p->next=NULL;
    free(n);
}
liste rechercherElement(liste l, int num){
    cellule *p;
    p=l;
    while(p!=NULL){
        if(p->etudiant.numInsc==num){
            return p;
        }
        p=p->next;
    }
}
liste minimumListe(liste l){
    cellule *p;
    p=l;
    int min=p->etudiant.numInsc;
    while(p!=NULL){
        if(min > p->etudiant.numInsc){
            min=p->etudiant.numInsc;
        }
        p=p->next;
    }
    while(p!=NULL){
        if(min==p->etudiant.numInsc){
            return p;
        }
        p=p->next;
    }

}
void afficherliste(liste l)
{
    cellule *p;
    p=l;
    while(p!=NULL)
    {
        printf("\n%d\t",p->etudiant.numInsc);
        printf("%s\t",p->etudiant.nom);
        printf("%s\t",p->etudiant.prenom);
        printf("%d\t\n",p->etudiant.age);
        p=p->next;
    }
}
void insererMilieu(liste *l,int x){
    cellule *n,*p,*pp;
    p=*l;
    int i=1;
    while(p!=NULL){
        pp=p->next;
        if(i==x){
            n=(cellule*)malloc(sizeof(cellule));
            printf("Donner le numero d'inscription : ");
            scanf("%d",&n->etudiant.numInsc);
            printf("donner le nom  : ");
            scanf("%s",n->etudiant.nom);
            printf("donner le prenom : ");
            scanf("%s",n->etudiant.prenom);
            printf("Donner l'age : ");
            scanf("%d",&n->etudiant.age);
            p->next=n;
            n->next=pp;
            break;
        }
        p=p->next;
        i+=1;
    }
}
int main(){
    liste l;
    int num=123;
    int x;

    printf("donner la position : ");
    scanf("%d",&x);

    creelistevide(&l);
    inserertete(&l);

    creeretudiant(&l);
    creeretudiant(&l);
    //supprimerEtudiantEnTete(&l);
    //supprimerEtudiantEnFin(&l);

    insererMilieu(&l,x);
    afficherliste(l);
    //rechercherElement(l,num);


}
