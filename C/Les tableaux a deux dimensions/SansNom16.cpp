#include<stdio.h>
#include<math.h>
main()
{
	int N,i,j,res=0; float X;
	int	A[N];
	
	printf("donner N : ");
	scanf("%d",&N);
	printf("donner X : ");
	scanf("%f",&X);
	
	j=N;
	
	for(i=0;i<N+1;j--,i++)
	{
		printf("donner A(%d) : ",j);
		scanf("%d",&A[i]);	
	}
	for(i=0;i<N+1;i++)
	{
		printf(" %d ",A[i]);
	}
	
	printf("\n");
	
	j=N;
	
	for(i=0;i<N;i++,j--)
	{
		res+=A[j]*pow(X,j);	
	}
	
	printf("le resultat avec la fonction pow() : %d",res);
	
	for(res=0,i=0,j=N;i<N;i++,j--)
	{
		res=res*X+A[j-1];
	}
	printf("\n");
	printf("le resultat avec la methode de Horner : %d",res);
	
	
	
	
}
