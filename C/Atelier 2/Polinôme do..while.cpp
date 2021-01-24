#include<stdio.h>
main()
{
	int p,s,i,x,n,a,j;
	
	s=0;
	printf("donner x : ");
	scanf("%d",&x);
	printf("donner n : ");
	scanf("%d",&n);
	i=0;
	
	do
	{	
		printf("donner le coefficient a : ");
		scanf("%d",&a);
		p=1;
		j=1;
		do
		{
			p*=x;
			j++;
		}while(j<=i);
		s+=a*p;
		i++;
	}while (i<=n);
	printf("les resultat est : %d",s);
}
