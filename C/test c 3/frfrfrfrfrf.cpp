#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<conio.h>
#define taille 4
void joueurs(int *n,int tj[],int ts[])
{

	printf("donner le nombre de joueurs : ");
	scanf("%d",n);
	for(int i=0;i<*n;i++)						//tableau des joueurs
	{
		tj[i]=0;
	}
	for(int i=0;i<*n;i++)						//tableau des scores
	{
		ts[i]=0;
	}
//	for(int i=0;i<*n;i++)						//affichage tableau des joueurs
//	{
//		printf("%d ",tj[i]);
//	}
//	printf("\n");
//	for(int i=0;i<*n;i++)						// affichage tableau des scores
//	{
//	printf("%d ",ts[i]);
//	}
//	printf("\n");
//	system("cls");
//	return *n;
}
char remplissage(char T[taille][taille])		//fichier txt
{
	FILE *fichier;
	fichier=fopen("fichier.txt","r");	
	for(int i=0;i<taille;i++)	
	{
		for(int j=0;j<taille;j++)
		{
			fscanf(fichier,"%s\n",T);
		}
	}
	fclose(fichier);
	return(T[taille][taille]);
}
int tableau_boleen(int Y[taille][taille])		//affectation de tous les case avec 0
{
	for(int i=0;i<taille;i++)						
	{
		for(int j=0;j<taille;j++)
		{
			Y[i][j]=1;	
		}
	}
	return(Y[taille][taille]);		
}
void comparaison(char T[taille][taille],int Y[taille][taille],int *g)		//comparaison entre les deux tableaux T et Y
{
	
	printf("     1   2   3   4\n");	
	printf("   -----------------\n");
	for(int i=0;i<taille;i++)			
	{
		printf(" %d ",i+1);
		for(int j=0;j<taille;j++)
		{	
			if (Y[i][j]==0)
			{
				printf("|   ");
				*g=1;
			}
			else
			{
				printf("| %c ",T[i][j]);
			}
		}
		printf("|\n   -----------------\n");	
	}
}
void saisie(int *c1,int *c2,int *c3,int *c4)	//saisie des cases donnee par les joueurs
{	
	do
	{
		do
		{
			printf("Donner la case 1 : ");
			scanf("%d %d",c1,c2);	
			if(*c1>=5||*c1<=0||*c2>=5||*c2<=0)
			{
				printf("veuillez entrer une valeur entre 1 et 4 !\n");
			}
		}while(*c1>=5||*c1<=0||*c2>=5||*c2<=0);
		do
		{
			printf("Donner la case 2 : ");
			scanf("%d %d",c3,c4);
			if(*c3>=5||*c3<=0||*c4>=5||*c4<=0)
			{
				printf("veuillez entrer une valeur entre 1 et 4 !\n");
			}
			if(*c1==*c3&&*c2==*c4);
			{
				printf("invalid !\n");
			}
		}while(*c3>=5||*c3<=0||*c4>=5||*c4<=0);
	}while(*c1==*c3&&*c2==*c4);
	system("cls");		
}
void decision(char T[taille][taille],int Y[taille][taille],int *c1,int *c2,int *c3,int *c4,int *n,int tj[],int ts[])
{																
	if(T[*c1-1][*c2-1]==T[*c3-1][*c4-1])	//decision	
	{
		for(int i=0;i<*n;i++)
		{
			if(tj[i]==1)
			{
				ts[i]+=1;
				printf("bravo joueurs %d gagne 1 points !",i+1);
			}				
			Y[*c1-1][*c2-1]=1;
			Y[*c3-1][*c4-1]=1;		
		}
	}
	else
	{
		for(int i=0;i<*n;i++)
		{
			if((tj[i]==1))
			{
				tj[i]=0;
				tj[i+1]=2;
			}
		}
		for(int i=0;i<*n;i++)
		{
			if((tj[i]==2))
			{
				tj[i]=1;
			}
		}
		printf("les deux cases ne correspondent pas !");	
	}
	printf("\n");
	for(int i=0;i<*n;i++)						//affichage tableau des joueurs
	{
		printf("%d ",tj[i]);
	}
	printf("\n");
	sleep(4);
	system("cls");
}
int main()
{
	char T[taille][taille];		//tableau des lettres
	int Y[taille][taille];		//tableau de 0 et 1
	int joueur1=1,joueur2=0;	//joueurs
	int g=1;					//variable qui permet de continuer ou arretter le jeu
	int c1,c2,c3,c4;			//les case donnees par les joueurs
	int score1=0,score2=0;
	int n;
	int tj[10],ts[10];
	
	joueurs(&n,tj,ts);
	tj[0]=1;
	for(int i=0;i<n;i++)						//affichage tableau des joueurs
	{
		printf("%d ",tj[i]);
	}
	printf("\n");
	remplissage(T);
	tableau_boleen(Y);
	comparaison(T,Y,&g);
	saisie(&c1,&c2,&c3,&c4);
	decision(T,Y,&c1,&c2,&c3,&c4,&n,tj,ts);
//	printf("\n");
//	for(int i=0;i<*n;i++)
//	{
//		printf("%d ",tj[i]);
//	}
//	printf("\n");
//	for(int i=0;i<*n;i++)
//	{
//		printf("%d ",ts[i]);
//	}
//	printf("\n");
}
