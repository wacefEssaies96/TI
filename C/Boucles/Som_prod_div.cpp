#include <stdio.h>
main()
{
 
 int somme=0,produit=1,i=0,x;
     
	do
	{
		printf("donner le %d chiffre : ",(i+1));
		scanf("%d",&x);
		
		if(x<0||x>9)
		{
			printf("\a");
		}
		else if (x)
		{
			i++;
			somme+=x;
			produit*=x;
		}
		else if(!x && i>0)
		{
			printf("La somme   des chiffres est %d \n", somme);
        	printf("Le produit des chiffres est %ld\n", produit);
        	printf("La moyenne des chiffres est %f \n", (float)somme/i);
		}
		
	}while(x);
	
	
	
	
 
  return 0;
}
