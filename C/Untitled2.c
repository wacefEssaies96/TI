#include<stdio.h>
#include<stdlib.h>
typedef struct cellule
{
    int information;
    struct cellule *suivant;
}cellule;
typedef cellule*liste;
void creelistevide(liste*l)
{
    *l=NULL;
}
void inserertete(liste *l,int x)
{
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->information=x;
    n->suivant=*l;
    *l=n;
}
void insererqueue(liste *l,int x)
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
int teteliste(liste l)
{
    return(l->information);
}
int queueliste(liste l)
{
    cellule *p;
    p=l;
    if(l!=NULL)
    {
        while(p->suivant!=NULL)
        {
            p=p->suivant;
        }
        return(p->information);
    }
    else
        return -1;
}
void afficherliste(liste l)
{
    cellule *p;
    p=l;
    while(p!=NULL)
    {
        printf("%d\n", p->information);
        p = p->suivant;
    }

}
int main()
{
    int y;
    liste l;

    creelistevide(&l);
    inserertete(&l,5);
    inserertete(&l,7);
    insererqueue(&l,12);
    afficherliste(l);


}
