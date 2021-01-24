#include <stdio.h>
main()
{
 /* Déclarations */
 int T[50][50]; /* tableau donné    */
 int L, C;      /* dimensions       */
 int I, J;      /* indices courants */
 long SOM;  /* somme des éléments - type long à cause   */
            /* de la grandeur prévisible des résultats. */

 /* Saisie des données */
 printf("Nombre de lignes   (max.50) : ");
 scanf("%d", &L );
 printf("Nombre de colonnes (max.50) : ");
 scanf("%d", &C );
 for (I=0; I<L; I++)
    for (J=0; J<C; J++)
        {
         printf("Elément[%d][%d] : ",I,J);
         scanf("%d", &T[I][J]);
        }
 /* Affichage du tableau */
 printf("Tableau donné :\n");
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
