#include<stdio.h>
main()
{
	int tq[10]={12,50,200,0,100,250,0,740,400,10};
	int i,max1=0,max2=0,max3=0;
	float tp[10]={2,4,4,1,3,2,2,4,1,6};
	float valeur=0.0;
	
	for(i=0;i<10;i++)
	{
		if(tq[i]>1000)
		{
			tp[i]=tp[i]*1.2;
		}
	}
	for(i=0;i<10;i++)
	{
		valeur+=tq[i]*tp[i];	
	}
	printf("la valeur du stocke est : %.2f \n",valeur);
	
	for(i=0;i<10;i++)
	{
		if(tq[i]==0)
		{
			printf("l'article %d est en repture ! \n",i+1);
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",int (tq[i]*tp[i]));	
	}	
	for(i=0;i<10;i++)
	{
		if(tq[i]*tp[i]>max1)
		{
			max1=tq[i]*tp[i];	
		}
		else if((max2<tq[i]*tp[i])&&(max2<max1))
		{
			max2=tq[i]*tp[i];	
		}
		else if((max3<max2)&&(max3<tq[i]*tp[i]))
		{
			max3=tq[i]*tp[i];	
		}	
	}
	printf("\nmax1 : %d\nmax2 : %d\nmax3 : %d ",max1,max2,max3);
}
