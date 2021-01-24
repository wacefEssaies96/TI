#include<stdio.h>
#include<stdlib.h>
int main(){
    int ** matrice , i;         /* un tableau à deux dimension */

    /*allocation d'un tableau de trois tableaux d'entiers */
    MALLOC(matrice,int*,3);

    for ( i = 0 ; i < 3 ; i ++ )
    {
         /* allocation d'un tableau de tableau */
         CALLOC(matrice[i],int,3);
    }

    /*remplissage d'une matrice diagonale*/
    for ( i = 0 ; i < 3 ; i++ )
    {
          matrice[i][i] = 1;
    }

    for(i = 0 ; i<3 ; i++)
    {
         FREE(matrice[i]);
    }
    FREE(matrice);
}
