#include<stdio.h>
main()
{
	int p,s,i,x,n,a,j;
	
	s=0;
	printf("donner x : ");
	scanf("%d",&x);
	printf("donner n : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("donner le coefficient a : ");
		scanf("%d",&a);
		p=1;
		for(j=1;j<=i;j++)
		{
			p*=x;
		}
		s+=a*p;
	}
	printf("les resultat est : %d",s);
}
