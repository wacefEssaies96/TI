#include <stdio.h>
main()
{
 int  X;       /* Le chiffre courant        */
 int  N=0;     /* Le compteur des décimales */
 long VALD=1;  /* Valeur de la position décimale courante */
 long NOMB=0;  /* Le nombre résultat                      */
 do
    {
      printf("Entrez le %d%s chiffre : ", (N+1), (N)?"e":"er");
     scanf("%d", &X);

     if (X<0||X>9)
        printf("\a");
     else if (X)
        {
         NOMB += VALD*X;
         N++;
         VALD *= 10;
        }
     else
        printf("La valeur du nombre renversé est %d\n", NOMB);
    }
 while (X);
  return 0;
}
