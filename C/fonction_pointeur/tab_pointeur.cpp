#include <stdio.h>

main()
{
 /* Prototypes des fonctions appelées par main */
 void ACQUERIR(int *N);
 void LIRE_VECTEUR(float T[], int N);
 void CALCULER_VALEURS(float X[], float V[], int N);
 void AFFICHER_TABLE(float X[], float V[], int N);
 /* Déclaration des variables locales de main */
 float X[100];   /* valeurs de X    */
 float V[100];   /* valeurs de F(X) */
 int N;
 /* Traitements */
 ACQUERIR(&N);   /* 1 <= N <= 100   */
 LIRE_VECTEUR(X, N);
 CALCULER_VALEURS(X, V, N);
 AFFICHER_TABLE(X, V, N);
 return 0;
}

void ACQUERIR(int *N)
{
 do
   {
    printf("Entrez un entier entre 1 et 100 : ");
    scanf("%d", N);
   }
 while (*N<1 || *N>100);
}

void LIRE_VECTEUR(float T[], int N)
{
 /* Remplit un tableau T d'ordre N avec des nombres 
    réels entrés au clavier */
 /* Déclaration des variables locales */
 int I;
 /* Remplir le tableau */
 printf("Entrez %d nombres réels :\n", N);
 for (I=0; I<N; I++)
     scanf("%f", &T[I]);
}

void CALCULER_VALEURS(float X[], float V[], int N)
{
 /* Remplit le tableau V avec les valeurs de */
 /* F(X[I]) pour les N premières composantes */
 /* X[I] du tableau X */
 /* Prototype de la fonction F */
 float F(float X);
 /* Déclaration des variables locales */
 int I;
 /* Calculer les N valeurs */
 for (I=0; I<N; I++)
     V[I] = F(X[I]);
}

float F(float X)
{
 /* Retourne la valeur numérique du polynôme défini 
    par F(X) = X^3-2X+1 */
 return (X*X*X - 2*X + 1);
}

void AFFICHER_TABLE(float X[], float V[], int N)
{
 /* Affiche une table de N valeurs : 
    X contient les valeurs données et 
    V contient les valeurs calculées. */
 /* Déclaration des variables locales */
 int I;
 /* Afficher le tableau */
 printf("\n X   : ");
 for (I=0; I<N; I++)
     printf("%.1f", X[I]);
 printf("\n F(X): ");
 for (I=0; I<N; I++)
     printf("%.1f", V[I]);
 printf("\n");
}
