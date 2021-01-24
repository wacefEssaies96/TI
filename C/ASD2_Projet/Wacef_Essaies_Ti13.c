#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define nmax 10
#define mmax 10
#define omax 10

                /* **************** Les structures ******************* */

typedef struct Livre{
    char Titre[50];
    char Auteur[50];
    char Editeur[50];
    struct date_edition{
        int jour;
        int mois;
        int annee;
    }date_edition;
    int Prix;
    int ISBN;
    int Quantite;
    char Categorie[50];
    int Ensemble_des_mots_cles;
    char Resume[100];
    char info_emprunt[100];
}Livre;
Livre T[nmax];

typedef struct Emprunteur{
    int num_inscri;
    struct date_inscri{
        int jour;
        int mois;
        int annee;
    }date_inscri;
    char Prenom[20];
    char Nom[20];
    struct date_naissance{
        int jour;
        int mois;
        int annee;
    }date_naissance;
    char Adresse[50];
    int num_tel;
}Emprunteur;
Emprunteur TE[mmax];

typedef struct Emprunt{
    int iden_emp;
    struct date_emprunt{
        int jour;
        int mois;
        int annee;
    }date_emprunt;
    struct date_retour{
        int jour;
        int mois;
        int annee;
    }date_retour;
    char etat_emprunt[20];
}Emprunt;
Emprunt EE[omax];

                        /* **************** Saisie des donnees ******************* */

void Saisie_Livre(int *n,Livre T[*n]){
    Livre *PL;
    printf("Donner le nombre des Livres : ");
    scanf("%d",n);
    system("cls");
    for(PL=T;PL<T+*n;PL++){
        printf("\n\n***********     Livre %d       ***********\n\n",PL-T+1);
        printf("Titre : ");
        scanf("%s",PL->Titre);
        printf("Auteur : ");
        scanf("%s",PL->Auteur);
        printf("Editeur : ");
        scanf("%s",&PL->Editeur);
        printf("Date d'edition jj mm aaaa : ");
        scanf("%d %d %d",&PL->date_edition.jour,&PL->date_edition.mois,&PL->date_edition.annee);
        printf("Prix : ");
        scanf("%d",&PL->Prix);
        printf("ISBN : ");
        scanf("%d",&PL->ISBN);
        printf("Quantite : ");
        scanf("%d",&PL->Quantite);
        printf("Categorie : ");
        scanf("%s",PL->Categorie);
        printf("Ensemble des mots cles : ");
        scanf("%d",&PL->Ensemble_des_mots_cles);
        printf("Resume : ");
        scanf("%s",PL->Resume);
        printf("Les information des emprunts du livres : ");
        scanf("%s",PL->info_emprunt);
        system("cls");
    }
}
void Saisie_Emprunteur(int *m,Emprunteur TE[*m]){
    Emprunteur *PE;
    printf("Donner le nombre des Emprunteur : ");
    scanf("%d",m);
    system("cls");
    for(PE=TE;PE<TE+*m;PE++){
        printf("\n\n***********     Emprunteur %d       ***********\n\n",PE-TE+1);
        printf("Numero d'inscription : ");
        scanf("%d",&PE->num_inscri);
        printf("Date d'inscription jj mm aaaa : ");
        scanf("%d %d %d",&PE->date_inscri.jour,&PE->date_inscri.mois,&PE->date_inscri.annee);
        printf("Prenom : ");
        scanf("%s",PE->Prenom);
        printf("Nom : ");
        scanf("%s",PE->Nom);
        printf("Date de naissance jj mm aaaa : ");
        scanf("%d %d %d",&PE->date_naissance.jour,&PE->date_naissance.mois,&PE->date_naissance.annee);
        printf("Adresse : ");
        scanf("%s",PE->Adresse);
        printf("Numero de telephone : ");
        scanf("%d",&PE->num_tel);
        system("cls");
    }
}
void Saisie_Emprunt(int *o,Emprunt EE[*o]){
    Emprunt *E;
    printf("Donner le nombre des Emprunts : ");
    scanf("%d",o);
    system("cls");
    for(E=EE;E<EE+*o;E++){
        printf("\n\n***********     Emprunt %d       ***********\n\n",E-EE+1);
        printf("Identifiant emprunteur : ");
        scanf("%d",&E->iden_emp);
        printf("Date emprunt (jj mm aaaa) : ");
        scanf("%d %d %d",&E->date_emprunt.jour,&E->date_emprunt.mois,&E->date_emprunt.annee);
        printf("Date prevu de retour (jj mm aaaa) : ");
        scanf("%d %d %d",&E->date_retour.jour,&E->date_retour.mois,&E->date_retour.annee);
        printf("Etat emprunt (rendu ou non) : ");
        scanf("%s",E->etat_emprunt);
        system("cls");
    }
}
                        /* **************** Affichage ******************* */

void Affichage_Livre(int n,Livre T[n]){
    Livre *PL;
    for(PL=T;PL<T+n;PL++){
        printf("\n\n***********     Livre %d       ***********\n\n",PL-T+1);
        printf("\nTitre : %s\n",PL->Titre);
        printf("Auteur : %s\n",PL->Auteur);
        printf("Editeur : %s\n",PL->Editeur);
        printf("Date d'edition : %d/%d/%d\n",PL->date_edition.jour,PL->date_edition.mois,PL->date_edition.annee);
        printf("prix : %d\n",PL->Prix);
        printf("ISBN : %d\n",PL->ISBN);
        printf("Quantite : %d\n",PL->Quantite);
        printf("Ensemble des mots cles : %d\n",PL->Ensemble_des_mots_cles);
        printf("Resume : %s\n",PL->Resume);
        printf("Les informations des emprunts du livre : %s\n",PL->info_emprunt);
    }
}
void affich_livre(int x,Livre T[]){
    Livre *PL;
    PL=T+x-1;
    printf("\n\n***********     Livre %d       ***********\n\n",PL-T+1);
    printf("\nTitre : %s\n",PL->Titre);
    printf("Auteur : %s\n",PL->Auteur);
    printf("Editeur : %s\n",PL->Editeur);
    printf("Date d'edition : %d/%d/%d\n",PL->date_edition.jour,PL->date_edition.mois,PL->date_edition.annee);
    printf("prix : %d\n",PL->Prix);
    printf("ISBN : %d\n",PL->ISBN);
    printf("Quantite : %d\n",PL->Quantite);
    printf("Ensemble des mots cles : %d\n",PL->Ensemble_des_mots_cles);
    printf("Resume : %s\n",PL->Resume);
    printf("Les informations des emprunts du livre : %s\n",PL->info_emprunt);
}
void Affichage_Emprunteur(int m,Emprunteur TE[m]){
    Emprunteur *PE;
    for(PE=TE;PE<TE+m;PE++){
        printf("\n\n***********     Emprunteur %d       ***********\n\n",PE-TE+1);
        printf("Numero d'inscription : %d\n",PE->num_inscri);
        printf("Date d'inscription : %d/%d/%d\n",PE->date_inscri.jour,PE->date_inscri.mois,PE->date_inscri.annee);
        printf("Prenom : %s\n",PE->Prenom);
        printf("Nom : %s\n",PE->Nom);
        printf("Date de naissance : %d/%d/%d\n",PE->date_naissance.jour,PE->date_naissance.mois,PE->date_naissance.annee);
        printf("Adresse : %s\n",PE->Adresse);
        printf("Numero de telephone : %d\n",PE->num_tel);
    }
}
void affich_emprunteur(int x,Emprunteur TE[]){
    Emprunteur *PE;
    PE=TE+x-1;
    printf("\n\n***********     Emprunteur %d       ***********\n\n",PE-TE+1);
    printf("Numero d'inscription : %d\n",PE->num_inscri);
    printf("Date d'inscription : %d/%d/%d\n",PE->date_inscri.jour,PE->date_inscri.mois,PE->date_inscri.annee);
    printf("Prenom : %s\n",PE->Prenom);
    printf("Nom : %s\n",PE->Nom);
    printf("Date de naissance : %d/%d/%d\n",PE->date_naissance.jour,PE->date_naissance.mois,PE->date_naissance.annee);
    printf("Adresse : %s\n",PE->Adresse);
    printf("Numero de telephone : %d\n",PE->num_tel);
}
void Affichage_Emprunt(int o,Emprunt EE[o]){
    Emprunt *E;
    for(E=EE;E<EE+o;E++){
        printf("\n\n***********     Emprunt %d       ***********\n\n",E-EE+1);
        printf("Identifiant emprunteur : %d\n",E->iden_emp);
        printf("Date emprunt : %d/%d/%d\n",E->date_emprunt.jour,E->date_emprunt.mois,E->date_emprunt.annee);
        printf("Date prevu du retour : %d/%d/%d\n",E->date_retour.jour,E->date_retour.mois,E->date_retour.annee);
        printf("Etat emprunt : %s\n",E->etat_emprunt);
    }
}
void affich_emprunt(int x,Emprunt EE[]){
    Emprunt *E;
    E=EE+x-1;
    printf("\n\n***********     Emprunt %d       ***********\n\n",E-EE+1);
    printf("Identifiant emprunteur : %d\n",E->iden_emp);
    printf("Date emprunt : %d/%d/%d\n",E->date_emprunt.jour,E->date_emprunt.mois,E->date_emprunt.annee);
    printf("Date prevu du retour : %d/%d/%d\n",E->date_retour.jour,E->date_retour.mois,E->date_retour.annee);
    printf("Etat emprunt : %s\n",E->etat_emprunt);
}

                        /* **************** Modification ******************* */

void Modif_Livre(int n,Livre T[n]){
    Livre *PL;
    int pos1=0;
    int pos2=0;
    int x=1;
    printf("\n**************** Modification d'un Livre ****************\n");
    while(x==1){
        printf("Donnez le numero du livre a modifier : ");
        scanf("%d",&pos1);
        printf("1 : Titre\n2 : Auteur\n3 : Editeur\n4 : Date d'edition\n5 : Prix\n6 : ISBN\n7 : Quantite\n8 : Categorie\n9 : Ensemble des mots-cles\n10 : Resume\n11 : Les informations des emprunts du livre\nChoissez le donnee a modifier : ");
        scanf("%d",&pos2);
        for(PL=T;PL<T+n;PL++){
            if(pos1==PL-T+1){
                switch(pos2){
                    case 1:{
                        printf("Titre : ");
                        scanf("%s",PL->Titre);
                        break;
                    }
                    case 2:{
                        printf("Auteur : ");
                        scanf("%s",PL->Auteur);
                        break;
                    }
                    case 3:{
                        printf("Editeur : ");
                        scanf("%s",&PL->Editeur);
                        break;
                    }
                    case 4:{
                        printf("Date d'edition jj mm aaaa : ");
                        scanf("%d %d %d",&PL->date_edition.jour,&PL->date_edition.mois,&PL->date_edition.annee);
                        break;
                    }
                    case 5:{
                        printf("Prix : ");
                        scanf("%d",&PL->Prix);
                        break;
                    }
                    case 6:{
                        printf("ISBN : ");
                        scanf("%d",&PL->ISBN);
                        break;
                    }
                    case 7:{
                        printf("Quantite : ");
                        scanf("%d",&PL->Quantite);
                        break;
                    }
                    case 8:{
                        printf("Categorie : ");
                        scanf("%s",PL->Categorie);
                        break;
                    }
                    case 9:{
                        printf("Ensemble des mots cles : ");
                        scanf("%d",&PL->Ensemble_des_mots_cles);
                        break;
                    }
                    case 10:{
                        printf("Resume : ");
                        scanf("%s",PL->Resume);
                        break;
                    }
                    case 11:{
                        printf("Les information des emprunts du livres : ");
                        scanf("%s",PL->info_emprunt);
                        break;
                    }
                }
            }
        }
        printf("\nAutre changement (oui=1/non=0) ? \n");
        scanf("%d",&x);
    }
}
void Modif_Emprunteur(int m,Emprunteur TE[m]){
    Emprunteur *PE;
    int pos1=0;
    int pos2=0;
    int x=1;
    printf("\n**************** Modification d'un emprunteur ****************\n");
    while(x==1){
        printf("Donnez l'emprunteur a modifier : ");
        scanf("%d",&pos1);
        printf("1 : Numero d'inscription\n2 : Date d'inscription\n3 : Prenom\n4 : Nom\n5 : Date de naissance\n6 : Adresse\n7 : Numero telephone\nChoissez le donnee a modifier : ");
        scanf("%d",&pos2);
        for(PE=TE;PE<TE+m;PE++){
            if(pos1==PE-TE+1){
                switch(pos2){
                    case 1:{
                        printf("Numero d'inscription : ");
                        scanf("%d",&PE->num_inscri);
                        break;
                    }
                    case 2:{
                        printf("Date d'inscription jj mm aaaa : ");
                        scanf("%d %d %d",&PE->date_inscri.jour,&PE->date_inscri.mois,&PE->date_inscri.annee);
                        break;
                    }
                    case 3:{
                        printf("Prenom : ");
                        scanf("%s",PE->Prenom);
                        break;
                    }
                    case 4:{
                        printf("Nom : ");
                        scanf("%s",PE->Nom);
                        break;
                    }
                    case 5:{
                        printf("Date de naissance jj mm aaaa : ");
                        scanf("%d %d %d",&PE->date_naissance.jour,&PE->date_naissance.mois,&PE->date_naissance.annee);
                    break;
                    }
                    case 6:{
                        printf("Adresse : ");
                        scanf("%s",PE->Adresse);
                    break;
                    }
                    case 7:{
                        printf("Numero de telephone : ");
                        scanf("%d",&PE->num_tel);
                    break;
                    }
                }
            }
        }
        printf("\nAutre changement (oui=1/non=0) ? \n");
        scanf("%d",&x);
    }
}
void Modif_Emprunt(int o,Emprunt EE[o]){
    Emprunt *E;
    int pos1=0;
    int pos2=0;
    int x=1;
    printf("\n**************** Modification d'un emprunt ****************\n");
    while(x==1){
        printf("Donnez l'emprunt a modifier : ");
        scanf("%d",&pos1);
        printf("1 : Idendifiant emprunt\n2 : Date emprunt\n3 : Date Prevu de retour\n4 : Etat emprunt\nChoissez le donnee a modifier : ");
        scanf("%d",&pos2);
        for(E=EE;E<EE+o;E++){
            if(pos1==E-EE+1){
                switch(pos2){
                    case 1:{
                        printf("Identifiant emprunteur : ");
                        scanf("%d",&E->iden_emp);
                        break;
                    }
                    case 2:{
                        printf("Date emprunt (jj mm aaaa) : ");
                        scanf("%d %d %d",&E->date_emprunt.jour,&E->date_emprunt.mois,&E->date_emprunt.annee);
                        break;
                    }
                    case 3:{
                        printf("Date prevu de retour (jj mm aaaa) : ");
                        scanf("%d %d %d",&E->date_retour.jour,&E->date_retour.mois,&E->date_retour.annee);
                        break;
                    }
                    case 4:{
                        printf("Etat emprunt (rendu ou non) : ");
                        scanf("%s",E->etat_emprunt);
                        break;
                    }
                }
            }
        }
        printf("Autre changement (oui=1/non=0) ? \n");
        scanf("%d",&x);
    }
}

                        /* **************** Suppression ******************* */

void Supp_Livre(int *n,Livre T[*n]){
    Livre *PL;
    int s;
    printf("Donner le livre a supprimer : ");
    scanf("%d",&s);

    if(s==*n){
        *n-=1;
    }
    if(s<*n){
        PL=T+s-1;
        while(PL<T+*n){
            *PL=*(PL+1);
            PL++;
        }
        *n-=1;
    }
}
void Supp_Emprunteur(int *m,Emprunteur TE[*m]){
    Emprunteur *PE;
    int s;
    printf("Donner l'emprunteur a supprimer : ");
    scanf("%d",&s);
    if(s==*m){
        *m-=1;
    }
    if(s<*m){
        PE=TE+s-1;
        while(PE<TE+*m){
            *PE=*(PE+1);
            PE++;
        }
        *m-=1;
    }
}
void Supp_Emprunt(int *o,Emprunt EE[*o]){
    Emprunt *E;
    int s;
    printf("Donner l'emprunt a supprimer : ");
    scanf("%d",&s);

    if(s==*o){
        *o-=1;
    }
    if(s<*o){
        E=EE+s-1;
        while(E<EE+*o){
            *E=*(E+1);
            E++;
        }
        *o-=1;
    }
}

                /* **************** Sauvgarde ******************* */

void Sauvgarde_Livre(int n,Livre T[n]){
    FILE *p[n];
    int i;
    char ch[50]={0};
    for(i=0;i<n;i++){
        sprintf(ch,"Livre %d.txt",i+1);
        p[i]=fopen(ch,"w");
        fprintf(p[i],"Titre : %s \n",T[i].Titre);
        fprintf(p[i],"Auteur : %s\n",T[i].Auteur);
        fprintf(p[i],"Editeur : %s\n",T[i].Editeur);
        fprintf(p[i],"Date d'edition : %d/%d/%d\n",T[i].date_edition.jour,T[i].date_edition.mois,T[i].date_edition.annee);
        fprintf(p[i],"Prix : %d\n",T[i].Prix);
        fprintf(p[i],"ISBN : %d\n",T[i].ISBN);
        fprintf(p[i],"Quantite : %d\n",T[i].Quantite);
        fprintf(p[i],"Categorie : %s\n",T[i].Categorie);
        fprintf(p[i],"Ensemble des mots cles : %d\n",T[i].Ensemble_des_mots_cles);
        fprintf(p[i],"Resume : %s\n",T[i].Resume);
        fprintf(p[i],"Les informations des emprunt du livre : %s",T[i].info_emprunt);
        fclose(p[i]);
    }
}
void Sauvgarde_Livre2(int n,Livre T[n]){
    FILE *p[n];
    Livre *pp;
    int i,x;
    char ch[50]={0};
    printf("Donne le numero du livre a sauvgarder : ");
    scanf("%d",&x);
    for(i=0,pp=T;i<n;i++,pp++){
        if(x==pp-T+1){
            sprintf(ch,"Livre %d.txt",i+1);
            p[i]=fopen(ch,"w");
            fprintf(p[i],"Titre : %s \n",T[i].Titre);
            fprintf(p[i],"Auteur : %s\n",T[i].Auteur);
            fprintf(p[i],"Editeur : %s\n",T[i].Editeur);
            fprintf(p[i],"Date d'edition : %d/%d/%d\n",T[i].date_edition.jour,T[i].date_edition.mois,T[i].date_edition.annee);
            fprintf(p[i],"Prix : %d\n",T[i].Prix);
            fprintf(p[i],"ISBN : %d\n",T[i].ISBN);
            fprintf(p[i],"Quantite : %d\n",T[i].Quantite);
            fprintf(p[i],"Categorie : %s\n",T[i].Categorie);
            fprintf(p[i],"Ensemble des mots cles : %d\n",T[i].Ensemble_des_mots_cles);
            fprintf(p[i],"Resume : %s\n",T[i].Resume);
            fprintf(p[i],"Les informations des emprunt du livre : %s",T[i].info_emprunt);
            fclose(p[i]);
            printf("Sauvgarde teminee ! \n");
            break;
        }
    }
}
void Sauvgarde_Emprunteur(int m,Emprunteur TE[m]){
    FILE *p;
    int i;
    p=fopen("Emprunteur.txt","w");
    for(i=0;i<m;i++){
        fprintf(p,"\n\t*******Emprunteur : %d********\n",i+1);
        fprintf(p,"Num d'inscription : %d \n",TE[i].num_inscri);
        fprintf(p,"Date d'inscription : %d/%d/%d \n",TE[i].date_inscri.jour,TE[i].date_inscri.mois,TE[i].date_inscri.annee);
        fprintf(p,"Prenom : %s\n",TE[i].Prenom);
        fprintf(p,"Nom : %s\n",TE[i].Nom);
        fprintf(p,"Date de naissance : %d/%d/%d\n",TE[i].date_naissance.jour,TE[i].date_naissance.mois,TE[i].date_naissance.annee);
        fprintf(p,"Adresse : %s\n",TE[i].Adresse);
        fprintf(p,"Numero de telephone : %d\n",TE[i].num_tel);
    }
    fclose(p);
}
void Sauvgarde_Emprunteur2(int m,Emprunteur TE[m]){
    FILE *p[m];
    Emprunteur *pp;
    int i,x;
    char ch[50]={0};
    printf("Donner le numero de l'emprunteur a sauvgarder : ");
    scanf("%d",&x);
    for(pp=TE,i=0;i<m;pp++,i++){
        if(x==pp-TE+1){
            sprintf(ch,"Emprunteur %d.txt",i+1);
            p[i]=fopen(ch,"w");
            fprintf(p[i],"\n\t*******Emprunteur : %d********\n",i+1);
            fprintf(p[i],"Num d'inscription : %d \n",TE[i].num_inscri);
            fprintf(p[i],"Date d'inscription : %d/%d/%d \n",TE[i].date_inscri.jour,TE[i].date_inscri.mois,TE[i].date_inscri.annee);
            fprintf(p[i],"Prenom : %s\n",TE[i].Prenom);
            fprintf(p[i],"Nom : %s\n",TE[i].Nom);
            fprintf(p[i],"Date de naissance : %d/%d/%d\n",TE[i].date_naissance.jour,TE[i].date_naissance.mois,TE[i].date_naissance.annee);
            fprintf(p[i],"Adresse : %s\n",TE[i].Adresse);
            fprintf(p[i],"Numero de telephone : %d\n",TE[i].num_tel);
            fclose(p[i]);
            printf("Sauvgarde teminee ! \n");
            break;
        }
    }
}
                        /* ***************** Importation **************** */

void Import_Livre1(int *n,Livre T[]){
    FILE *f;
    Livre *p;
    int i;
    char ch[50]={0};
    printf("Donner le nom du fichier : ");
    scanf("%s",&ch);
    for(p=T;p<T+*n+1;p++){
        if(p==T+*n){
            *n+=1;
            f=fopen(ch,"r");
            fscanf(f,"%s",p->Titre);
            fscanf(f,"%s",p->Auteur);
            fscanf(f,"%s",p->Editeur);
            fscanf(f,"%d %d %d",&p->date_edition.jour,&p->date_edition.mois,&p->date_edition.annee);
            fscanf(f,"%d",&p->Prix);
            fscanf(f,"%d",&p->ISBN);
            fscanf(f,"%d",&p->Quantite);
            fscanf(f,"%s",p->Categorie);
            fscanf(f,"%d",&p->Ensemble_des_mots_cles);
            fscanf(f,"%s",p->Resume);
            fscanf(f,"%s",p->info_emprunt);
            fclose(f);
            break;
        }
    }
}
void Import_Livre(int *n,Livre T[]){
    int m,i,v;              //m : Nombre de Livre a importer
    Livre *p;
    char ch[50]={0};
    v=*n;
    printf("Donner le nombre de Livre a importer : ");
    scanf("%d",&m);
    *n+=m;
    FILE *f[m];

    for(i=0,p=T+v;p<T+*n+m+1;p++,i++){
            sprintf(ch,"Livre%d.txt",i+1);
            f[i]=fopen(ch,"r");
            fscanf(f[i],"%s",p->Titre);
            fscanf(f[i],"%s",p->Auteur);
            fscanf(f[i],"%s",p->Editeur);
            fscanf(f[i],"%d %d %d",&p->date_edition.jour,&p->date_edition.mois,&p->date_edition.annee);
            fscanf(f[i],"%d",&p->Prix);
            fscanf(f[i],"%d",&p->ISBN);
            fscanf(f[i],"%d",&p->Quantite);
            fscanf(f[i],"%s",p->Categorie);
            fscanf(f[i],"%d",&p->Ensemble_des_mots_cles);
            fscanf(f[i],"%s",p->Resume);
            fscanf(f[i],"%s",p->info_emprunt);
            fclose(f[i]);
    }
}
void Import_Emprunteur1(int *m,Emprunteur TE[]){
    FILE *f;
    Emprunteur *p;
    char ch[50]={0};
    printf("Donner le nom du fichier : ");
    scanf("%s",&ch);
    for(p=TE;p<TE+*m+1;p++){
        if(p==TE+*m){
            *m+=1;
            f=fopen(ch,"r");
            fscanf(f,"%d",&p->num_inscri);
            fscanf(f,"%d %d %d",&p->date_inscri.jour,&p->date_inscri.mois,&p->date_inscri.annee);
            fscanf(f,"%s",p->Prenom);
            fscanf(f,"%s",p->Nom);
            fscanf(f,"%d %d %d",&p->date_naissance.jour,&p->date_naissance.mois,&p->date_naissance.annee);
            fscanf(f,"%s",p->Adresse);
            fscanf(f,"%d",&p->num_tel);
            fclose(f);
            break;
        }
    }
}
void Import_Emprunteur(int *m,Emprunteur TE[]){
    int n,i,v;              //n : Nombre d'emrunteur a importer
    Emprunteur *p;
    char ch[50]={0};
    v=*m;
    printf("Donner le nombre de Livre a importer : ");
    scanf("%d",&n);
    *m+=n;
    FILE *f[n];

    for(i=0,p=TE+v;p<TE+*m+n+1;p++,i++){
            sprintf(ch,"Emp%d.txt",i+1);
            f[i]=fopen(ch,"r");
            fscanf(f[i],"%d",&p->num_inscri);
            fscanf(f[i],"%d %d %d",&p->date_inscri.jour,&p->date_inscri.mois,&p->date_inscri.annee);
            fscanf(f[i],"%s",p->Prenom);
            fscanf(f[i],"%s",p->Nom);
            fscanf(f[i],"%d %d %d",&p->date_naissance.jour,&p->date_naissance.mois,&p->date_naissance.annee);
            fscanf(f[i],"%s",p->Adresse);
            fscanf(f[i],"%d",&p->num_tel);
            fclose(f[i]);
    }
}

                    /* ************* Recherche ************* */

void Recherche_Livre(int n,Livre T[]){
    Livre *p;
    char ch[50]={0};
    int v,pp=0;
    printf("\n    ************* Recherche_Livre_Selon_Titre *************\n\n");
    printf("Donner le Titre du Livre : ");
    scanf("%s",&ch);
    for(p=T;p<T+n;p++){
        v=strcmp(ch,p->Titre);
        if(v==0){
            pp=p-T+1;
            break;
        }
    }
    if(pp>0){
        printf("-%s- est le titre du Livre %d \n",ch,pp);
    }
    if(pp==0){
        printf("-%s- n'appartient a aucun titre de livre dans la bibliotheque.\n",ch);
    }
    affich_livre(pp,T);
}
void Recherche_Emprunt(int o,Emprunt EE[]){
    printf("\n    ************* Recherche_Emprunt_Selon_Date *************\n\n");
    int jj,mm,aaaa;
    SYSTEMTIME Time;
    GetLocalTime(&Time);
    Emprunt *ee;
    jj=Time.wDay;
    mm=Time.wMonth;
    aaaa=Time.wYear;
    char ch[]={"non"};
    int c;
    printf("Date d'aujourd'hui : %d/%d/%d\n",jj,mm,aaaa);
    for(ee=EE;ee<EE+o;ee++){
        c=strcmp(ch,ee->etat_emprunt);
        if(c==0){
            if(((ee->date_retour.jour>jj)&&(ee->date_retour.mois==mm)&&(ee->date_retour.annee==aaaa))||((ee->date_retour.mois>mm)&&(ee->date_retour.annee==aaaa))||(ee->date_retour.annee>aaaa)){
                //printf("\nEmprunt %d : Date de retour expire !\n",ee-EE+1);
                affich_emprunt(ee-EE+1,EE);
            }
        }
    }
}
void Recherche_Emprunteur(int m,Emprunteur TE[]){
    Emprunteur *pp;
    char n[20];
    char p[20];
    int c,v1,v2,nn,i;
    printf("1 : Recherche selon nom et prenom\n");
    printf("2 : Recherche selon le numero d'inscription\n");
    printf("choix : ");
    scanf("%d",&c);
    if(c==1){
        printf("Donnez le prenom : ");
        scanf("%s",&p);
        printf("Donnez le nom : ");
        scanf("%s",&n);
        for(i=0,pp=TE;pp<TE+m;pp++){
            v1=strcmp(p,pp->Prenom);
            if(v1==0){
                v2=strcmp(n,pp->Nom);
                if(v2==0){
                    i+=1;
                    affich_emprunteur(pp-TE+1,TE);
                }
            }
        }
    }
    if(c==2){
        printf("Donnez le numero d'inscription : ");
        scanf("%d",&nn);
        for(i=0,pp=TE;pp<TE+m;pp++){
            if(nn==pp->num_inscri){
                affich_emprunteur(pp-TE+1,TE);
            }
        }
    }
    if(i==0){
        printf("L'emprunteur donnee n'existe pas !\n");
    }
}
                        /* ************************** Menu ************************** */

void menu(int n,int m,int o,Livre T[],Emprunteur TE[],Emprunt EE[]){
    int x=1;
    while(x>0){
        printf("\n------------> Menu <------------\n");
        printf("\nLivre : \n\n");
        printf("1 : Saisir les livres\n");
        printf("2 : Importation d'un seul\n");
        printf("3 : Importation de tous\n");
        printf("4 : Sauvgarder un seul\n");
        printf("5 : Sauvgarder tous\n");
        printf("6 : Affichage\n");
        printf("7 : Modifier\n");
        printf("8 : Supprimer\n");
        printf("9 : Recherche\n");
        printf("\nEmprunteur : \n\n");
        printf("10 : Saisir\n");
        printf("11 : Sauvgarder un seul\n");
        printf("12 : Sauvgarder tous\n");
        printf("13 : Importation d'un seul\n");
        printf("14 : Importation de tous\n");
        printf("15 : Affichage\n");
        printf("16 : Modifier\n");
        printf("17 : Supprimer\n");
        printf("18 : Recherche\n");
        printf("\nEmprunt : \n\n");
        printf("19 : Saisir\n");
        printf("20 : Affichage\n");
        printf("21 : Modifier\n");
        printf("22 : Supprimer\n");
        printf("23 : Recherche (date de retour expiree)\n");
        printf("\n0:Quitter le programe\n\n");
        printf("Choisir l'operation souhaitee : ");
        scanf("%d",&x);
        system("cls");
        if(x==0){
            printf("Au revoir !\n");
        }
        if(x==1){
            Saisie_Livre(&n,T);
        }
        if(x==2){
            Import_Livre1(&n,T);
        }
        if(x==3){
           Import_Livre(&n,T);
        }
        if(x==4){
          Sauvgarde_Livre2(n,T);
        }
        if(x==5){
           Sauvgarde_Livre(n,T);
        }
        if(x==6){
            Affichage_Livre(n,T);
        }
        if(x==7){
            Modif_Livre(n,T);
        }
        if(x==8){
            Supp_Livre(&n,T);
        }
        if(x==9){
            Recherche_Livre(n,T);
        }
        if(x==10){
            Saisie_Emprunteur(&m,TE);
        }
        if(x==11){
            Sauvgarde_Emprunteur2(m,TE);
        }
        if(x==12){
            Sauvgarde_Emprunteur(m,TE);
        }
        if(x==13){
            Import_Emprunteur1(&m,TE);
        }
        if(x==14){
            Import_Emprunteur(&m,TE);
        }
        if(x==15){
            Affichage_Emprunteur(m,TE);
        }
        if(x==16){
            Modif_Emprunteur(m,TE);
        }
        if(x==17){
            Supp_Emprunteur(&m,TE);
        }
        if(x==18){
            Recherche_Emprunteur(m,TE);
        }
        if(x==19){
            Saisie_Emprunt(&o,EE);
        }
        if(x==20){
            Affichage_Emprunt(o,EE);
        }
        if(x==21){
            Modif_Emprunt(o,EE);
        }
        if(x==22){
            Supp_Emprunt(&o,EE);
        }
        if(x==23){
            Recherche_Emprunt(o,EE);
        }
    }
}
int main(){
    int n=0,m=0,o=0;
    menu(n,m,o,T,TE,EE);
}
