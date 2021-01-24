#include<stdio.h>
void operation(int *n1,int *n2)
{
	printf("%d+%d=%d\n",*n1,*n2,(*n1+*n2));
	printf("%d-%d=%d\n",*n1,*n2,(*n1-*n2));
	printf("%d*%d=%d\n",*n1,*n2,((*n1)*(*n2)));
	printf("%d/%d=%d\n",*n1,*n2,((*n1)/(*n2)));
	
}

main()
{
	int n1,n2;
	int somme,sous,multi,div;
	
	printf("donner n1 : ");
	scanf("%d",&n1);
	
	printf("donnner n2 : ");
	scanf("%d",&n2);
	
	operation(&n1,&n2);
	
			
}
