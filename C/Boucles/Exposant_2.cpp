#include <stdio.h>
main()
{
 int  X, N;   /* Les donn�es */
 int  I;      /* Le compteur */
 double RESU; /* Type double � cause de la */
              /* grandeur du r�sultat.     */

 do
    {
      printf("Entrez l'entier naturel X : ");
     scanf("%d", &X);
    }
 while (X<0);
 do
    {
      printf("Entrez l'exposant       N : ");
     scanf("%d", &N);
    }
 while (N<0);
 
 /* Pour N=0, le r�sultat sera automatiquement X^0=1 */
 for (RESU=1.0, I=1 ; I<=N ; I++)
        RESU*=X;
 
 /* Attention: Pour X=0 et N=0 , 0^0 n'est pas d�fini */
 if (N==0 && X==0)
     printf("z�ro exposant z�ro n'est pas d�fini !\n");
 else
     printf("R�sultat : %d ^ %d = %.0f\n", X, N, RESU);
  return 0;
}

