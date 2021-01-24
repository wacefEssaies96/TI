#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<conio.h>
#define taille 4
void joueurs(int *n)
{
	int t2[2][*n];
	printf("donner le nombre de joueurs : ");
	scanf("%d",n);
	
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<*n;j++)
		{
			t2[i][j]=j+1;	
//			t2[i+1][j]=0;
		}
		if(i==1)
		{
			break;
		}
	}
//	for(int i=1;i<2;i++)
//	{
//		for(int j=0;j<*n;j++)
//		{
//			t2[i][j]=0;	
//		}
//	}
//	int i=0,j=0;
//	while(i<=1)
//	{
//		for(j=0;j<*n;j++)
//		{
//			t2[i][j]=j+1;
//			t2[i+1][j]=0;		
//		}
//		i++;	
//	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<*n;j++)
		{
			printf("%d ",t2[i][j]);	
		}
		printf("\n");
	}
}
main()
{
	int n;
	int t2[2][n];
	joueurs(&n);
	


	
	
}
