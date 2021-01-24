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
	while (i<=n)
	{
		printf("donner le coefficient a : ");
		scanf("%d",&a);
		p=1;
		j=1;
		while(j<=i)
		{
			p*=x;
			j++;
		}
		s+=a*p;
		i++;
	}
	printf("les resultat est : %d",s);
}
