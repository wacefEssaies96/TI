#include <stdio.h>
main()
{
 												/* Prototypes des fonctions appel�es par main */
 void RECTANGLE(int L, int H);
 												/* D�claration des variables locales de main */
 int L, H;
 												/* Traitements */
 printf("Entrer la longueur (>= 1): ");
 scanf("%d", &L);
 printf("Entrer la hauteur  (>= 1): ");
 scanf("%d", &H);
 												/* Afficher un rectangle d'�toiles */
 RECTANGLE(L,H);
 return 0;
}

 void RECTANGLE(int L, int H)
{
 												/* Prototypes des fonctions appel�es */
 void LIGNE(int L);
 												/* D�claration des variables locales */
 int I;
 												/* Traitements */
 												/* Afficher H lignes avec L �toiles  */
 for (I=0; I<H; I++)
      LIGNE(L);
}
void LIGNE(int L)
{
												/* Affiche � l'�cran une ligne avec L �toiles */
 												/* D�claration des variables locales */
 int I;
 												/* Traitements */
 for (I=0; I<L; I++)
      printf("*");
 printf("\n");
}
