#include<stdio.h>
#include<stdlib.h>
typedef struct Etudiant{
    int num_incri;
    //char nom[20];
    //char prenom[20];
    //float moyenne;
}Etudiant;
typedef struct cellule{
    Etudiant e;
    struct cellule * suivant;
}cellule;
typedef struct file{
    cellule * tete;
    cellule * queue;
}file;
void init_file(file *f){
    f->tete=NULL;
    f->queue=NULL;
}
int file_vide(file f){
    return((f.tete==NULL)&&(f.queue==NULL));
}
void remplissage(cellule *n){
    printf("Num : ");
    scanf("%d",&n->e.num_incri);
}
void enfiler(file *f,int x){
    cellule *n;
    n=(cellule*)malloc(sizeof(cellule));
    n->e.num_incri=x;
    n->suivant=NULL;
    if(file_vide(*f)){
        f->tete=n;
        f->queue=n;
    }
    else{
        f->queue->suivant=n;
        f->queue=n;
    }

}
int sommet(file f){
    if(!file_vide(f)){
        return (f.tete->e.num_incri);
    }
    else {
        return (-1);
    }
}
void defiler(file *f){
    cellule *p;
    p=f->tete;
    f->tete=p->suivant;
    free(p);
}
void affiche_file(file *f){
    file pp;
    init_file(&pp);
    int x;
    while(!file_vide(*f)){
        x=sommet(*f);
        enfiler(&pp,x);
        defiler(f);
    }
    while(!file_vide(pp)){
        enfiler(f,x);
        defiler(&pp);
    }
}
int main(){
    file f;
    init_file(&f);
    int x,i=0;
    while(i<4){
        printf("donner un entier : ");
        scanf("%d",&x);
        enfiler(&f,x);
        i++;
    }
    affiche_file(&f);



}
