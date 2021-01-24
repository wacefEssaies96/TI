#include<stdio.h>
#include<stdlib.h>
typedef struct cellule
{
    char information;
    struct cellule *suivant;
}cellule;
typedef cellule *liste;

void creelistevide(liste *l)
{
    *l=NULL;
}
void inserertete(liste *l,char x)
{
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->information=x;
    n->suivant=*l;
    *l=n;
}
void insererqueue(liste *l,char x)
{
    cellule *n,*p;
    n=(cellule*)malloc(sizeof(cellule));
    n->information=x;
    n->suivant=NULL;
    if(*l!=NULL)
    {
        p=*l;
        while(p->suivant!=NULL)
        {
            p=p->suivant;
        }
        p->suivant=n;
    }
    else
        *l=n;
}

void afficherliste(liste l)
{
    while(l!=NULL)
    {
        printf("%c  ", l->information);
        l=l->suivant;
    }
}
void recherche(liste l,char x){

    while((l!=NULL)&&(l->information!=x)){
        l=l->suivant;
    }
    if(l==NULL){

        printf("le caractere n'existe pas !");
    }
    else{
        printf("le caractere existe !");
    }
}

int main()
{
    liste l;
    creelistevide(&l);
    char x;
    //char x='d';
    printf("donner x : ");
    scanf("%c",&x);

    inserertete(&l,'e');
    inserertete(&l,'b');
    inserertete(&l,'a');
    insererqueue(&l,'c');

    afficherliste(l);
    recherche(l,x);
}
