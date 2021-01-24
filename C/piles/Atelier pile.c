#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

typedef struct cellule{
    int val;
    struct cellule *suivant;
}cellule;

typedef struct cellule *pile;

typedef struct file{
    cellule * tete;
    cellule * queue;
}file;

void creer_pile(pile *p){
    *p=NULL;
}
void creer_file(file *f){
    f->tete=NULL;
    f->queue=NULL;
}
int vide_file(file f){
    return((f.tete==NULL)&&(f.queue==NULL));
}
int vide_pile(pile p){
    return(p==NULL);
}
int sommet_pile(pile p){
    if(!vide_pile(p)){
        return(p->val);
    }
}
int sommet_file(file f){
    if(!vide_file(f)){
        return(f.tete->val);
    }
    else{
        return(-1);
    }
}
void enfiler(file *f,int x){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->val=x;
    n->suivant=NULL;
    if(!vide_file(*f)){
        f->queue->suivant=n;
    }
    else{
        f->tete=n;
        f->queue=n;
    }
}
void empiler_pile(pile *p,int x){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->val=x;
    n->suivant=*p;
    *p=n;
}
void depiler_pile(pile *p){
    if(!vide_pile(*p)){
        cellule *ptr;
        ptr=*p;
        *p=ptr->suivant;
        free(ptr);
    }
    else{
        printf("impossible ! \n");
    }
}

void afficher_pile(pile *p){
    if(!vide_pile(*p)){
        pile p1;
        creer_pile(&p1);
        while(!vide_pile(*p)){
            printf("%d  \n",sommet_pile(*p));
            empiler_pile(&p1,sommet_pile(*p));
            depiler_pile(p);
        }
        while(!vide_pile(p1)){
            empiler_pile(p,sommet_pile(p1));
            depiler_pile(&p1);
        }
    }
}
void afficher_pile_inverse(pile *p){
    if(!vide_pile(*p)){
        pile p1;
        pile p2;
        creer_pile(&p1);
        creer_pile(&p2);
        while(!vide_pile(*p)){
            empiler_pile(&p1,sommet_pile(*p));
            empiler_pile(&p2,sommet_pile(p1));
            printf("%d  \n",sommet_pile(p2));
            depiler_pile(p);
        }
        while(!vide_pile(p1)){
            empiler_pile(p,sommet_pile(p1));
            depiler_pile(&p1);
        }
    }
}
/*void ranger_pair_impair(pile *p){
    cellule *a;
    a=*p;
    while(a!=NULL){
        if(a->val%2==0){
            b=(cellule_pile_pair*)malloc(sizeof(cellule_pile_pair));
            b->val=a->val;

        }
        a=a->suivant;
    }
}*/
int main(){
    file f;
    pile p;
    int x;
    int y;
    creer_pile(&p);
    do{
        printf("1 : empiler\n2 : afficher\n3 : depiler\n4 : test\n5 : afficher pile inverse\n0 : sortir\n");
        if(x==1){
            printf("donner un entier : ");
            scanf("%d",&y);
            empiler_pile(&p,y);
        }
        if(x==2){
            printf("\n\n********** Affichage *************\n\n");
            afficher_pile(&p);
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
        if(x==5){
                printf("\n\n********** Affichage inverse *************\n\n");
            afficher_pile_inverse(&p);
        }
        if(x==0){
            printf("au revoir !");
        }
        printf("choisir : ");
        scanf("%d",&x);
        system("cls");
    }while(x!=0);

}
