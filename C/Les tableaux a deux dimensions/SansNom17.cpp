#include <stdio.h>
#include <math.h>
main()
{
 	int N,i,j,max=0,min=0;
 	int T[N];
 	
 	printf("donner la dimension du tableau : ");
 	scanf("%d",&N);
 	
 	for(i=0;i<N;i++)
 	{
 		printf("donner la valeur de la case %d : ",i+1);
		scanf("%d",&T[i]);	
	}
	
	for(i=0;i<N;i++)
	{
		if(T[i]>T[max])
		{
			max=i;
		}
		if (T[i]<T[min])
		{
			min=i;
		}
	}
	printf("le max est : %d",T[max]);
	printf("\nle min est : %d",T[min]);






}
