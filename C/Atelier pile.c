#include<stdio.h>
#include<stdlib.h>

typedef struct cellule{
    int val;
    struct cellule *suivant;
}cellule;

typedef struct cellule *pile;

typedef struct cellule_temp{
    int val;
    struct cellule_temp *suivant;
}cellule_temp;
typedef cellule_temp *pile_temp;

typedef struct cellule_pile_pair{
    int val;
    struct cellule_pile_pair *suivant;
}cellule_pile_pair;
typedef cellule_pile_pair *pile_pair;

typedef struct cellule_pile_impair{
    int val;
    struct cellule_pile_impair *suivant;
}cellule_pile_impair;
typedef cellule_pile_impair *pile_impair;

void creer_pile(pile *p,pile_pair *pp,pile_impair *pi,pile_temp *pt){
    *pt=NULL;
    *p=NULL;
    *pp=NULL;
    *pi=NULL;
}

int vide_pile(pile p){
    return(p==NULL);
}

int sommet_pile(pile p){
    if(!vide_pile(p)){
        return(p->val);
    }
}
int sommet_pile_temp(pile_temp pt){
    if(pt!=NULL){
        return(pt->val);
    }
}

void empiler_pile(pile *p,int x){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->val=x;
    n->suivant=*p;
    *p=n;
}
void empiler_pile_temp(pile_temp *pt,int x){
    cellule_temp *i;
    i=(cellule_temp*)malloc(sizeof(cellule_temp));
    i->val=x;
    i->suivant=*pt;
    *pt=i;
}

void depiler_pile(pile *p){
    if(!vide_pile(*p)){
        cellule *ptr;
        ptr=*p;
        *p=ptr->suivant;
        free(ptr);
    }else{
        printf("impossible ! \n");
    }
}
void depiler_pile_temp(pile_temp *pt){
    if(pt!=NULL){
        cellule_temp *ptr;
        ptr=*pt;
        *pt=ptr->suivant;
        free(ptr);
    }else{
        printf("impossible ! \n");
    }
}

void afficher_pile(pile *p,pile_temp *pt){
    cellule *a;
    cellule_temp *b;
    int s;
    a=*p;
    b=*pt;
    while(a!=NULL){
        printf("%d  ",sommet_pile(a));
        s=sommet_pile(a);
        empiler_pile_temp(pt,s);
        depiler_pile(&a);
    }
    while(b!=NULL){
        s=sommet_pile_temp(b);
        empiler_pile(p,s);
        depiler_pile_temp(&b);

    }
    printf("\n");
}
void ranger_pair_impair(pile *p,pile_pair *pp,pile_impair *pi){
    cellule *a;
    cellule_pile_pair *b;
    cellule_pile_impair *c;

    a=*p;
    while(a!=NULL){
        if(a->val%2==0){
            b=(cellule_pile_pair*)malloc(sizeof(cellule_pile_pair));
            b->val=a->val;
        }
        a=a->suivant;
    }
}
int main(){

    pile p;
    pile_pair pp;
    pile_impair pi;
    pile_temp pt;
    int x;
    int y;
    creer_pile(&p,&pp,&pi,&pt);
    do{
        printf("choisir:\n");
        printf("1 : empiler\n2 : afficher\n3 : depiler\n4 : test\n0 : sortir\n");
        scanf("%d",&x);
        if(x==1){
            printf("donner un entier : ");
            scanf("%d",&y);
            empiler_pile(&p,y);
        }
        if(x==2){
            afficher_pile(&p,&pt);
        }
        if(x==3){
            depiler_pile(&p);
        }
        if(x==4){
            if(vide_pile(p)){
                printf("pile vide\n");
            }
            else
                printf("pile n'est pas vide\n");
        }
        if(x==0){
            printf("au revoir !");
        }
    }while(x!=0);

}
