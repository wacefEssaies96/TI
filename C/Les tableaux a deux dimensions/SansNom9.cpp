#include <stdio.h>
main()
{
 /* D�clarations */
 int T[50][50]; /* tableau donn�    */
 int L, C;      /* dimensions       */
 int I, J;      /* indices courants */
 long SOM;  /* somme des �l�ments - type long � cause   */
            /* de la grandeur pr�visible des r�sultats. */

 /* Saisie des donn�es */
 printf("Nombre de lignes   (max.50) : ");
 scanf("%d", &L );
 printf("Nombre de colonnes (max.50) : ");
 scanf("%d", &C );
 for (I=0; I<L; I++)
    for (J=0; J<C; J++)
        {
         printf("El�ment[%d][%d] : ",I,J);
         scanf("%d", &T[I][J]);
        }
 /* Affichage du tableau */
 printf("Tableau donn� :\n");
 for (I=0; I<L; I++)
    {
     for (J=0; J<C; J++)
          printf("%7d", T[I][J]);
     printf("\n");
    }
 /* Calcul et affichage de la somme des lignes */
 for (I=0; I<L; I++)
     {
      for (SOM=0, J=0; J<C; J++)
             SOM += T[I][J];
      printf("Somme - ligne %d : %ld\n",I,SOM);
     }
 /* Calcul et affichage de la somme des colonnes */
 for (J=0; J<C; J++)
     {
      for (SOM=0, I=0; I<L; I++)
             SOM += T[I][J];
      printf("Somme - colonne %d : %ld\n",J,SOM);
     }
  return 0;
}
