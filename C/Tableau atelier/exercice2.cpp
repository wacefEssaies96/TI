#include<stdio.h>
main()
{
	int i,pos=0,neg=0;
	int T[5];
	for(i=0;i<5;i++)			//saisie
	{
		printf("donner la valeur de la case %d : ",i+1);
		scanf("%d",&T[i]);
		if(T[i]<0)
		{
			neg+=1;
		}
		if (T[i]>0)
		{
			pos+=1;
		}
	}
	
	printf("le nombre des element positives est : %d\nle nombre des element negatives est : %d",pos,neg);
	
}
