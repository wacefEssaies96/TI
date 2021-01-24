#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>



int boucle_de_saisie(int s,int i,int j,int T[4][4])
{
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			T[i][j]=s;	
		}
	}
}
int main()
int boucle_de_saisie(int s,int i,int j,int T[4][4])
{
	int s,i,j,T[4][4];
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("donner la valeur de la case T[%d][%d] : ",i+1,j+1);	
			scanf("%d",&s);		
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d ",T[i][j]);		
		}
		printf("\n");
	}
}
