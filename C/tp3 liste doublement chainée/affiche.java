
class affiche
{  static void main(String[ ] args)
     { // recherche s�quentielle dans un tableau
        int [ ] table= {12,-5,7,8,-6,6,4,78,2};
        byte elt = 4;
        short i ;
        for ( i = 0 ; i<8 ; i++ )
        if (elt= =table[i]) break ;
        afficher(i,elt);
      }
   static void afficher (int rang , long val)
   { if (rang == 8)
        System.out.println("valeur : "+val+" pas trouv�e.");
      else
        System.out.println("valeur : "+val+" trouv�e au rang :"+ rang);
   }
}
