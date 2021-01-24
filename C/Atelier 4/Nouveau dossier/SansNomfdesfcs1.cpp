#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int premier (int x)
{
   int i,y;
 
   y=sqrt(x)+1;
   if (x%2==0)//permet de voir si le nombre est paire ou non
      {
      return 0;
      }
    else
      {
       for (i = 1 ; i < y; i+=2)//boucle sans les diviseurs paires
      {
        if (x % i == 0)
           return 0;
      }
      return 1;
      }
      }
      int premier2 (int x)
{
    int j,a;
 
    // Boucle permettant de scanner les nombres entre 0 et n
    for (j=1; j<x;j++)
    {
        a = premier(j);
        // Affichage des nombres si ils sont premiers
        if (a == 1)
        {
            printf("%d ",j);
        }
    }
    printf("\n\n");
}
 
 
int main(int argc, char *argv[])
{
int c;
 
    // Menu de sélection du programme
    printf("******** Exercire I ********\n\n");
    printf("1. Tester si le nombre saisi est premier\n");
    printf("2. Afficher les nombres premiers inferieurs a un nombre n\n");
    printf("3. Afficher les n premiers nombres premiers\n");
    printf("0. Quitter\n");
    scanf("%d",&c);
 
    int n,y;
 
    switch (c)
    {
           case 1 :
                {
                    printf("\n******** Tester si le nombre saisi est premier ********\n\n");
 
                    // Saisie de la valeur par l'utilisateur
                    printf("Saisissez n : ");
                    scanf("%d",&n);
 
                    y = premier(n);
 
                    // Affichage du message (traduction de la réponse de la fonction
                    if (y == 0)
                        printf("\n%d n'est pas premier\n\n",n);
                    else
                        printf("%d est premier !!\n",n);
                    system("PAUSE");
                    break;
                }
                case 2 :
                {
                    printf("\n******** Afficher les nombres premiers inferieurs a un nombre n ********\n\n");
 
                    // Saisie de la valeur par l'utilisateur
                    printf("Saisissez n : ");
                    scanf("%d",&n);
                    printf("\n");
 
                    y = premier2 (n);
 
                    system("PAUSE");
                    break;
                }
    }
}
