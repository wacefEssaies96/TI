#include <stdio.h>
main()
{
 int LIG;   /* nombre de lignes        */
 int L;     /* compteur des lignes     */
 int ESP;   /* nombre d'espaces        */
 int I;     /* compteur des caractères */

 do
   {
     printf("Nombres de lignes : ");
    scanf("%d", &LIG);
   }
 while (LIG<1 || LIG>20);
 
 for (L=0 ; L<LIG ; L++)
   {
    ESP = LIG-L-1;
    for (I=0 ; I<ESP ; I++)
        putchar(' ');
    for (I=0 ; I<2*L+1  ; I++)
        putchar('*');
    putchar('\n');
   }
  return 0;
}

