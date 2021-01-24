#include <stdio.h>
main()
{
 												/* Prototypes des fonctions appelées par main */
 void RECTANGLE(int L, int H);
 												/* Déclaration des variables locales de main */
 int L, H;
 												/* Traitements */
 printf("Entrer la longueur (>= 1): ");
 scanf("%d", &L);
 printf("Entrer la hauteur  (>= 1): ");
 scanf("%d", &H);
 												/* Afficher un rectangle d'étoiles */
 RECTANGLE(L,H);
 return 0;
}

 void RECTANGLE(int L, int H)
{
 												/* Prototypes des fonctions appelées */
 void LIGNE(int L);
 												/* Déclaration des variables locales */
 int I;
 												/* Traitements */
 												/* Afficher H lignes avec L étoiles  */
 for (I=0; I<H; I++)
      LIGNE(L);
}
void LIGNE(int L)
{
												/* Affiche à l'écran une ligne avec L étoiles */
 												/* Déclaration des variables locales */
 int I;
 												/* Traitements */
 for (I=0; I<L; I++)
      printf("*");
 printf("\n");
}
