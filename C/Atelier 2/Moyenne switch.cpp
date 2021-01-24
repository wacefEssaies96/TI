#include<stdio.h>
main()
{
	int n1,n2,n3,n4;
	float moy;
	
		printf("donner la note 1 :\n");
		scanf("%d",&n1);
		
		printf("donner la note 2 : \n");
		scanf("%d",&n2);
		
		printf("donner la note 3 : \n");
		scanf("%d",&n3);
		
		printf("donner la note 4 : \n");
		scanf("%d",&n4);
		
		moy=(n1+n2+n3+n4)/4;
		
		switch ('moy')
		{
			case 'moy>20||moy<0' :
			printf("passable ! ");
			break;
			
			case 'moy<10' : 
			printf("refuse");
			break;
			
			case 'moy<14' :
			printf("passable");
			break;
			
			case 'moy<16' :
			printf("bien");
			break;
		}
	
	
}
	

