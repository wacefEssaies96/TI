#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define nmax 10
#define mmax 10

                /* **************** Les structures ******************* */
typedef struct date{
    int jour;
    int mois;
    int annee;
}date;

typedef struct Mot_cle{
    char Mot[20];
}Mot_cle;

typedef struct Emprunt{
    int iden_emp;
    date date_emprunt;
    date date_retour;
    char etat_emprunt[20];
}Emprunt;

typedef struct Livre{
    char Titre[50];
    char Auteur[50];
    char Editeur[50];
    date date_edition;
    int Prix;
    int ISBN;
    int Quantite;
    char Categorie[50];
    int Nombre_Mot;
    Mot_cle m[mmax];
    char Resume[100];
    int taille;
    Emprunt t[nmax];
}Livre;

typedef struct Emprunteur{
    int num_inscri;
    date date_inscri;
    char Prenom[20];
    char Nom[20];
    date date_naissance;
    char Adresse[50];
    int num_tel;
}Emprunteur;

typedef struct Cellule_Livre{
    Livre Livre;
    struct Cellule_Livre *suivant;
}Cellule_Livre;
typedef Cellule_Livre*Liste_Livre;

typedef struct Cellule_Emprunteur{
    Emprunteur Emprunteur;
    struct Cellule_Emprunteur *suivant;
}Cellule_Emprunteur;
typedef Cellule_Emprunteur*Liste_Emprunteur;

void Init_Liste(Liste_Livre *L,Liste_Emprunteur *E){
    *L=NULL;
    *E=NULL;
}
                        /* ************* Recherche ************* */
Liste_Livre Recherche_Livre_Titre(Liste_Livre L,char titre[]){
    int test=1;
    Cellule_Livre *p;
    p=L;
    while(p!=NULL){
        test=strcmp(p->Livre.Titre,titre);
        if(test==0){
            return p;
        }
        p=p->suivant;
    }
    return NULL;
}
int Recherche_Emprunteur(Cellule_Emprunteur *p,Cellule_Livre *pp){
    int jj,mm,aaaa;
    SYSTEMTIME Time;
    GetLocalTime(&Time);
    jj=Time.wDay;
    mm=Time.wMonth;
    aaaa=Time.wYear;
    char ch[]={"non"};
    int c;                      //Variable pour tester
    Emprunt *ee;
    for(ee=pp->Livre.t;ee<pp->Livre.t+pp->Livre.taille;ee++){
        c=strcmp(ch,ee->etat_emprunt);
        if(c==0){
            if(p->Emprunteur.num_inscri==ee->iden_emp){
                if(((ee->date_retour.jour>jj)&&(ee->date_retour.mois==mm)&&(ee->date_retour.annee==aaaa))||((ee->date_retour.mois>mm)&&(ee->date_retour.annee==aaaa))||(ee->date_retour.annee>aaaa)){
                    return 1;
                }
            }
        }
    }
}
int Recherche_Emprunteur_Num(Cellule_Emprunteur *p,int x){
    if(p->Emprunteur.num_inscri==x){
        return 1;
    }
    else return 0;
}
                        /* **************** Saisie des donnees ******************* */
void Remplissage_Livre(Cellule_Livre *n){
        Emprunt *p;
        Mot_cle *m;
        printf("\n\n***********     Livre       ***********\n\n");
        printf("Titre : ");
        scanf("%s",n->Livre.Titre);
        printf("Auteur : ");
        scanf("%s",n->Livre.Auteur);
        printf("Editeur : ");
        scanf("%s",&n->Livre.Editeur);
        printf("Date d'edition jj mm aaaa : ");
        scanf("%d %d %d",&n->Livre.date_edition.jour,&n->Livre.date_edition.mois,&n->Livre.date_edition.annee);
        printf("Prix : ");
        scanf("%d",&n->Livre.Prix);
        printf("ISBN : ");
        scanf("%d",&n->Livre.ISBN);
        printf("Quantite : ");
        scanf("%d",&n->Livre.Quantite);
        printf("Categorie : ");
        scanf("%s",n->Livre.Categorie);
        printf("Ensemble des mots cles : ");
        scanf("%d",&n->Livre.Nombre_Mot);
        for(m=n->Livre.m;m<n->Livre.m+n->Livre.Nombre_Mot;m++){
            printf("Donner le mot cles %d : ",m-n->Livre.m+1);
            scanf("%s",m->Mot);
        }
        printf("Resume : ");
        scanf("%s",n->Livre.Resume);
        printf("Nombre d'enprunt : ");
        scanf("%d",&n->Livre.taille);
        for(p=n->Livre.t;p<n->Livre.t+n->Livre.taille;p++){
            printf("\n\n***********     Emprunt        ***********\n\n");
            printf("Identifiant emprunteur : ");
            scanf("%d",&p->iden_emp);
            printf("Date emprunt (jj mm aaaa) : ");
            scanf("%d %d %d",&p->date_emprunt.jour,&p->date_emprunt.mois,&p->date_emprunt.annee);
            printf("Date prevu de retour (jj mm aaaa) : ");
            scanf("%d %d %d",&p->date_retour.jour,&p->date_retour.mois,&p->date_retour.annee);
            printf("Etat emprunt (rendu ou non) : ");
            scanf("%s",p->etat_emprunt);
        }
        system("cls");
}
void Remplissage_Emprunteur(Cellule_Emprunteur *n){
    printf("\n\n***********     Emprunteur %d       ***********\n\n");
    printf("Numero d'inscription : ");
    scanf("%d",&n->Emprunteur.num_inscri);
    printf("Date d'inscription jj mm aaaa : ");
    scanf("%d %d %d",&n->Emprunteur.date_inscri.jour,&n->Emprunteur.date_inscri.mois,&n->Emprunteur.date_inscri.annee);
    printf("Prenom : ");
    scanf("%s",n->Emprunteur.Prenom);
    printf("Nom : ");
    scanf("%s",n->Emprunteur.Nom);
    printf("Date de naissance jj mm aaaa : ");
    scanf("%d %d %d",&n->Emprunteur.date_naissance.jour,&n->Emprunteur.date_naissance.mois,&n->Emprunteur.date_naissance.annee);
    printf("Adresse : ");
    scanf("%s",n->Emprunteur.Adresse);
    printf("Numero de telephone : ");
    scanf("%d",&n->Emprunteur.num_tel);
    system("cls");
}

void Saisie_Livre_Liste(Liste_Livre *L){
    Cellule_Livre *n,*p;
    n=(Cellule_Livre*)malloc(sizeof(Cellule_Livre));
    Remplissage_Livre(n);
    if(*L==NULL){
        n->suivant=*L;
        *L=n;
    }
    else{
        p=*L;
        while(p->suivant!=NULL){
            p=p->suivant;
        }
        n->suivant=NULL;
        p->suivant=n;
    }
}
void Saisie_Emprunteur_Liste(Liste_Emprunteur *E){
    Cellule_Emprunteur *n,*p;
    n=(Cellule_Emprunteur*)malloc(sizeof(Cellule_Emprunteur));
    Remplissage_Emprunteur(n);
    if(*E==NULL){
        n->suivant=*E;
        *E=n;
    }
    else{
        p=*E;
        while(p->suivant!=NULL){
            p=p->suivant;
        }
        n->suivant=NULL;
        p->suivant=n;
    }
}
void Saisie_Emprunt(Liste_Livre *L){
    Emprunt *pp;
    Cellule_Livre *p;
    char ch[20];
    printf("Donnner le titre du livre : \n");
    scanf("%s",&ch);
    p=Recherche_Livre_Titre(*L,ch);
    if(p!=NULL){
        p->Livre.taille+=1;
        pp=p->Livre.t;
        while(pp<p->Livre.t+p->Livre.taille){
            pp++;
        }
        printf("\n\n***********     Emprunt        ***********\n\n");
        printf("Identifiant emprunteur : ");
        scanf("%d",&pp->iden_emp);
        printf("Date emprunt (jj mm aaaa) : ");
        scanf("%d %d %d",&pp->date_emprunt.jour,&pp->date_emprunt.mois,&pp->date_emprunt.annee);
        printf("Date prevu de retour (jj mm aaaa) : ");
        scanf("%d %d %d",&pp->date_retour.jour,&pp->date_retour.mois,&pp->date_retour.annee);
        printf("Etat emprunt (rendu ou non) : ");
        scanf("%s",pp->etat_emprunt);
        printf("valeur : %d\n",pp->iden_emp);
    }
    else
        printf("Livre introuvable ! \n");
}
                        /* **************** Affichage ******************* */
void Affiche_Livre(Cellule_Livre p){
    Emprunt *pp;
    Mot_cle *m;
    printf("\n\n***********     Livre       ***********\n\n");
    printf("\nTitre : %s\n",p.Livre.Titre);
    printf("Auteur : %s\n",p.Livre.Auteur);
    printf("Editeur : %s\n",p.Livre.Editeur);
    printf("Date d'edition : %d/%d/%d\n",p.Livre.date_edition.jour,p.Livre.date_edition.mois,p.Livre.date_edition.annee);
    printf("prix : %d\n",p.Livre.Prix);
    printf("ISBN : %d\n",p.Livre.ISBN);
    printf("Quantite : %d\n",p.Livre.Quantite);
    printf("Ensemble des mots cles : %d\n",p.Livre.Nombre_Mot);
    for(m=p.Livre.m;m<p.Livre.m+p.Livre.Nombre_Mot;m++){
        printf("Mot %d : %s\n",m-p.Livre.m+1,m->Mot);
    }
    printf("Resume : %s\n",p.Livre.Resume);
    for(pp=p.Livre.t;pp<p.Livre.t+p.Livre.taille;pp++){
            printf("\n\n***********     Emprunt %d       ***********\n\n",pp-p.Livre.t+1);
            printf("Identifiant emprunteur : %d\n",pp->iden_emp);
            printf("Date emprunt : %d/%d/%d\n",pp->date_emprunt.jour,pp->date_emprunt.mois,pp->date_emprunt.annee);
            printf("Date prevu de retour : %d/%d/%d\n",pp->date_retour.jour,pp->date_retour.mois,pp->date_retour.annee);
            printf("Etat emprunt (rendu ou non) : %s\n",pp->etat_emprunt);
    }
}
void Affiche_Emprunteur(Cellule_Emprunteur p){
    printf("\n\n***********     Emprunteur        ***********\n\n");
    printf("Numero d'inscription : %d\n",p.Emprunteur.num_inscri);
    printf("Date d'inscription : %d/%d/%d\n",p.Emprunteur.date_inscri.jour,p.Emprunteur.date_inscri.mois,p.Emprunteur.date_inscri.annee);
    printf("Prenom : %s\n",p.Emprunteur.Prenom);
    printf("Nom : %s\n",p.Emprunteur.Nom);
    printf("Date de naissance : %d/%d/%d\n",p.Emprunteur.date_naissance.jour,p.Emprunteur.date_naissance.mois,p.Emprunteur.date_naissance.annee);
    printf("Adresse : %s\n",p.Emprunteur.Adresse);
    printf("Numero de telephone : %d\n",p.Emprunteur.num_tel);
}
void Affiche_Livre_Liste(Liste_Livre L){
    Cellule_Livre *p;
    p=L;
    while(p!=NULL){
        if(p->Livre.Quantite!=0){
            Affiche_Livre(*p);
        }
        p=p->suivant;
    }
}
void Affiche_Livre_Liste_deux(Liste_Livre L){
    Cellule_Livre *p;
    p=L;
    float test=0;
    float quantite=0;
    float taille=0;
    while(p!=NULL){
        quantite=p->Livre.Quantite;
        taille=p->Livre.taille;
        test=taille/quantite*100;
        if(test>80){
            Affiche_Livre(*p);
        }
        p=p->suivant;
    }
}
void Affiche_Categorie(Liste_Livre L){
    Cellule_Livre *p;
    p=L;
    int max=0;
    while(p!=NULL){
        if(max<p->Livre.taille){
           max=p->Livre.taille;
        }
        p=p->suivant;
    }
    p=L;
    while(p!=NULL){
        if(max==p->Livre.taille){
            printf("La categorie le plus emprunte est : %s\n",p->Livre.Categorie);
        }
        p=p->suivant;
    }
}
void Affiche_Emprunteur_Date(Liste_Emprunteur E,Liste_Livre L){
    Cellule_Emprunteur *p;
    Cellule_Livre *pp;
    p=E;
    pp=L;
    int test;
    while(p!=NULL){
        while(pp!=NULL){
            test=Recherche_Emprunteur(p,pp);
            if(test==1){
                Affiche_Emprunteur(*p);
                test=0;
            }
            pp=pp->suivant;
        }
        pp=L;
        p=p->suivant;
    }
}
void Affiche_Emprunteur_Liste(Liste_Emprunteur E){
    Cellule_Emprunteur *p;
    p=E;
    while(p!=NULL){
        Affiche_Emprunteur(*p);
        p=p->suivant;
    }
}
                        /* **************** Modification ******************* */
void Modif_Livre(Liste_Livre *L,char ch[]){
    printf("\n**************** Modification d'un Livre ****************\n");
    Cellule_Livre *p;
    int pos;
    p=Recherche_Livre_Titre(*L,ch);
    if(p!=NULL){
        Affiche_Livre(*p);
        Remplissage_Livre(p);
    }
    if(p==NULL){
        printf("Introuvable ! \n");
    }
}
void Modif_Emprunteur(Liste_Emprunteur *E){
    Cellule_Emprunteur *p,*pp;
    int Num;
    p=*E;
    printf("Donner le Numero d'inscription : ");
    scanf("%d",&Num);
    while(p!=NULL){
        if(Recherche_Emprunteur_Num(p,Num)){
            Remplissage_Emprunteur(p);
        }
        p=p->suivant;
    }
}
                        /* **************** Suppression ******************* */
void Supprimer_Livre(Liste_Livre *L){
    Cellule_Livre *p,*pp;
    pp=*L;
    char ch[20];
    printf("Donner le titre du livre a supprimer : ");
    scanf("%s",&ch);
    p=Recherche_Livre_Titre(*L,ch);
    if(p!=NULL){
        if(p==*L){
            *L=p->suivant;
        }
        else{
           while(pp->suivant!=p){
            pp=pp->suivant;
           }
           pp->suivant=p->suivant;
        }
        free(p);
    }
}
void Supprimer_Emprunteur(Liste_Emprunteur *E){
    Cellule_Emprunteur *p,*pp;
    int Num;
    p=*E;
    pp=*E;
    printf("Donner le Numero d'insciption\n");
    scanf("%d",&Num);
    while((p!=NULL)&&(Recherche_Emprunteur_Num(p,Num))){
        p=p->suivant;
    }
    if(p!=NULL){
        if(p==*E){
            *E=p->suivant;
        }
        else{
           while(pp->suivant!=p){
            pp=pp->suivant;
           }
           pp->suivant=p->suivant;
        }
        free(p);
    }
    else{
        printf("Emprunteurs introuvable ! \n");
    }
}
                        /* **************** Sauvgarde ******************* */
void Sauvgarde_Livres(Liste_Livre L){
    char ch[20];
    int m=3;
    Cellule_Livre *p;
    Mot_cle *mm;
    Emprunt *pp;
    p=L;
    FILE *f[m];
    int i=0;
    while(i<3){
        sprintf(ch,"Livre%d.txt",i+1);
        remove(ch);
        i++;
    }
    while(p!=NULL){
        sprintf(ch,"Livre%d.txt",i+1);
        remove(ch);
        f[i]=fopen(ch,"w");
        fprintf(f[i],"%s \n",p->Livre.Titre);
        fprintf(f[i],"%s\n",p->Livre.Auteur);
        fprintf(f[i],"%s\n",p->Livre.Editeur);
        fprintf(f[i],"%d/%d/%d\n",p->Livre.date_edition.jour,p->Livre.date_edition.mois,p->Livre.date_edition.annee);
        fprintf(f[i],"%d\n",p->Livre.Prix);
        fprintf(f[i],"%d\n",p->Livre.ISBN);
        fprintf(f[i],"%d\n",p->Livre.Quantite);
        fprintf(f[i],"%s\n",p->Livre.Categorie);
        fprintf(f[i],"%d\n",p->Livre.Nombre_Mot);
        for(mm=p->Livre.m;mm<p->Livre.m+p->Livre.Nombre_Mot;mm++){
            fprintf(f[i],"%s\n",mm->Mot);
        }
        fprintf(f[i],"%s\n",p->Livre.Resume);
        fprintf(f[i],"%d\n",p->Livre.taille);
        for(pp=p->Livre.t;pp<p->Livre.t+p->Livre.taille;pp++){
            fprintf(f[i],"%d\n",pp->iden_emp);
            fprintf(f[i],"%d %d %d\n",pp->date_emprunt.jour,pp->date_emprunt.mois,pp->date_emprunt.annee);
            fprintf(f[i],"%d %d %d\n",pp->date_retour.jour,pp->date_retour.mois,pp->date_retour.annee);
            fprintf(f[i],"%s\n",pp->etat_emprunt);
        }
        fclose(f[i]);
        i++;
        p=p->suivant;
    }
}
void Sauvgarde_Emprunteur(Liste_Emprunteur E){
    Cellule_Emprunteur *p;
    p=E;
    FILE *f;
    f=fopen("Emp.txt","w");
    while(p!=NULL){
        fprintf(f,"%d\n",p->Emprunteur.num_inscri);
        fprintf(f,"%d %d %d\n",p->Emprunteur.date_inscri.jour,p->Emprunteur.date_inscri.mois,p->Emprunteur.date_inscri.annee);
        fprintf(f,"%s\n",p->Emprunteur.Nom);
        fprintf(f,"%s\n",p->Emprunteur.Prenom);
        fprintf(f,"%d %d %d\n",p->Emprunteur.date_naissance.jour,p->Emprunteur.date_naissance.mois,p->Emprunteur.date_naissance.annee);
        fprintf(f,"%d\n",p->Emprunteur.Adresse);
        fprintf(f,"%d\n\n",p->Emprunteur.num_tel);
        p=p->suivant;
    }
    fclose(f);

}
                        /* ***************** Importation **************** */
void Import_Livres(Liste_Livre *L){
    int m=3;
    FILE *f[m];
    Cellule_Livre *n,*p;
    Emprunt *pp;
    Mot_cle *mm;
    char ch[20];
    int i=0;
    while(i<3){
        n=(Cellule_Livre*)malloc(sizeof(Cellule_Livre));
        sprintf(ch,"Livre%d.txt",i+1);
        f[i]=fopen(ch,"r");
        fscanf(f[i],"%s",n->Livre.Titre);
        fscanf(f[i],"%s",n->Livre.Auteur);
        fscanf(f[i],"%s",n->Livre.Editeur);
        fscanf(f[i],"%d %d %d",&n->Livre.date_edition.jour,&n->Livre.date_edition.mois,&n->Livre.date_edition.annee);
        fscanf(f[i],"%d",&n->Livre.Prix);
        fscanf(f[i],"%d",&n->Livre.ISBN);
        fscanf(f[i],"%d",&n->Livre.Quantite);
        fscanf(f[i],"%s",n->Livre.Categorie);
        fscanf(f[i],"%d",&n->Livre.Nombre_Mot);
        for(mm=n->Livre.m;mm<n->Livre.m+n->Livre.Nombre_Mot;mm++){
            fscanf(f[i],"%s",mm->Mot);
        }
        fscanf(f[i],"%s",n->Livre.Resume);
        fscanf(f[i],"%d",&n->Livre.taille);
        for(pp=n->Livre.t;pp<n->Livre.t+n->Livre.taille;pp++){
            fscanf(f[i],"%d",&pp->iden_emp);
            fscanf(f[i],"%d %d %d",&pp->date_emprunt.jour,&pp->date_emprunt.mois,&pp->date_emprunt.annee);
            fscanf(f[i],"%d %d %d",&pp->date_retour.jour,&pp->date_retour.mois,&pp->date_retour.annee);
            fscanf(f[i],"%s",pp->etat_emprunt);
        }
        fclose(f[i]);
        if(*L==NULL){
            n->suivant=*L;
            *L=n;
        }else{
            p=*L;
            while(p->suivant!=NULL){
                p=p->suivant;
            }
            n->suivant=NULL;
            p->suivant=n;
        }
        i++;
    }
}
void Import_Emprunteurs(Liste_Emprunteur *E){
    Cellule_Emprunteur *n,*p;
    FILE *f;
    int i=0;
    f=fopen("Emp.txt","r");
    while(i<4){
        n=(Cellule_Emprunteur*)malloc(sizeof(Cellule_Emprunteur));
        fscanf(f,"%d",&n->Emprunteur.num_inscri);
        fscanf(f,"%d %d %d",&n->Emprunteur.date_inscri.jour,&n->Emprunteur.date_inscri.mois,&n->Emprunteur.date_inscri.annee);
        fscanf(f,"%s",n->Emprunteur.Prenom);
        fscanf(f,"%s",n->Emprunteur.Nom);
        fscanf(f,"%d %d %d",&n->Emprunteur.date_naissance.jour,&n->Emprunteur.date_naissance.mois,&n->Emprunteur.date_naissance.annee);
        fscanf(f,"%s",n->Emprunteur.Adresse);
        fscanf(f,"%d",&n->Emprunteur.num_tel);
        if(*E==NULL){
            n->suivant=*E;
            *E=n;
        }
        else{
            p=*E;
            while(p->suivant!=NULL){
                p=p->suivant;
            }
            n->suivant=NULL;
            p->suivant=n;
        }
        i++;
    }
    fclose(f);
}
                        /* ************* Menu **************** */
void menu(Liste_Livre *L,Liste_Emprunteur *E){
    int x,y;
    char ch[30];
    do{
        printf("\n------------> Menu <------------\n");
        printf("\nLivre : \n\n");
        printf("1 : Saisir les livres\n");
        printf("2 : Afficher tout les livres (quantite!=0)\n");
        printf("3 : Afficher la categorie la plus emprunt\n");
        printf("4 ; Afficher les livres qui ont ete empruntees plus que 80pr du temps\n");
        printf("5 : Modifier\n");
        printf("6 : Supprimer\n");
        printf("\nEmprunteur : \n\n");
        printf("7 : Saisir\n");
        printf("8 : Afficher tous les emprunteurs\n");
        printf("9 : Afficher les emprunteurs qui on depasse la date limite\n");
        printf("10 : Modifier\n");
        printf("11 : Supprimer\n");
        printf("\nEmprunt : \n\n");
        printf("12 : Saisir\n");
        printf("13 : Modifier\n");
        printf("14 : Supprimer\n");
        printf("\n0:Quitter le programme\n\n");
        printf("Choisir l'operation souhaitee : ");
        scanf("%d",&x);
        system("cls");
        if(x==1){
            Saisie_Livre_Liste(L);
        }
        if(x==2){
            Affiche_Livre_Liste(*L);
        }
        if(x==3){
            Affiche_Categorie(*L);
        }
        if(x==4){
            Affiche_Livre_Liste_deux(*L);
        }
        if(x==5){
            printf("Saisir le titre du livre a modifier : ");
            scanf("%s",&ch);
            Modif_Livre(L,ch);
        }
        if(x==6){
            Supprimer_Livre(L);
        }
        if(x==7){
            Saisie_Emprunteur_Liste(E);
        }
        if(x==8){
            Affiche_Emprunteur_Liste(*E);
        }
        if(x==9){
            Affiche_Emprunteur_Date(*E,*L);
        }
        if(x==10){
            Modif_Emprunteur(E);
        }
        if(x==11){
            Supprimer_Emprunteur(E);
        }
        if(x==12){
            Saisie_Emprunt(L);
        }
        if(x==13){

        }
        if(x==14){

        }
        if(x==15){

        }
        if(x==16){

        }
        if(x==17){

        }
        if(x==18){

        }
        if(x==19){

        }
        if(x==20){

        }
        if(x==21){

        }
        if(x==22){

        }
        if(x==23){

        }
        if(x==0){
            printf("Voulez-vous sauvgarder les changement ( 0 ou 1 ) : ");
            scanf("%d",&y);
            if(y==1){
                Sauvgarde_Livres(*L);
                Sauvgarde_Emprunteur(*E);
                printf("Sauvegarde terminee ! \n");
            }
            printf("Au revoir ! \n");
        }
    }while(x!=0);
}
int main(){
    Liste_Livre L;
    Liste_Emprunteur E;
    Init_Liste(&L,&E);
    Import_Livres(&L);
    Import_Emprunteurs(&E);
    menu(&L,&E);
}
