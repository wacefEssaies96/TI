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
	system("cls");
	for(int i=0;i<*n;i++)						//tableau des joueurs
	{
		tj[i]=0;
	}
	for(int i=0;i<*n;i++)						//tableau des scores
	{
		ts[i]=0;
	}
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
			Y[i][j]=0;	
		}
	}
	return(Y[taille][taille]);		
}
char affichage(char T[taille][taille])			//affichage de la grille a lettre pendant 5sec
{	
	printf("     1   2   3   4\n");	
	printf("   -----------------\n");
	for(int i=0;i<taille;i++)
	{
		printf(" %d ",i+1);
		for(int j=0;j<taille;j++)
		{
			printf("| %c ",T[i][j]);
		}
		printf("|\n   -----------------\n");	
	}
	printf("Vous avez 5 secondes pour memoriser toutes les lettres !\n");
	sleep(5);
	system("cls");
	return(T[taille][taille]);	
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
void saisie(int *c1,int *c2,int *c3,int *c4,int *n,int tj[])	//saisie des cases donnee par les joueurs
{	
	do
	{
		do
		{	
			for(int i=0;i<*n;i++)	
			{
				if(tj[i]==1)
				{
					printf("joueur %d :\nDonner la case 1 : ",i+1);
					scanf("%d %d",c1,c2);	
					if(*c1>=5||*c1<=0||*c2>=5||*c2<=0)
					{
						printf("veuillez entrer une valeur entre 1 et 4 !\n");
					}
				}
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
void verf(char T[taille][taille],int *c1,int *c2,int *c3,int *c4)	//affichages des case choisis par les joueurs
{
	printf("     1   2   3   4\n");	
	printf("   -----------------\n");
	for(int i=0;i<taille;i++)		
	{
		printf(" %d ",i+1);
		for(int j=0;j<taille;j++)	
		{	
			if (i==*c1-1&&j==*c2-1)
			{
				printf("| %c ",T[*c1-1][*c2-1]);
			}
			else if (i==*c3-1&&j==*c4-1)
			{
				printf("| %c ",T[*c3-1][*c4-1]);
			}	
			else 
			{
				printf("|   ");
			}
		}
		printf("|\n   -----------------\n");
	}
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
			if(tj[i]==1)
			{
				if(i+1==*n)
				{
					tj[0]=2;
				}
				tj[i]=0;
				tj[i+1]=2;
			}	
		}
		for(int i=0;i<*n;i++)
		{
			if(tj[i]==2)
			{
				tj[i]=1;
			}
		}
		printf("les deux cases ne correspondent pas !");	
	}
	printf("\nscore :\n");
	for(int i=0;i<*n;i++)
	{
		printf("joueur %d ==> %d\n",i+1,ts[i]);
	}
	printf("\n");
	sleep(4);
	system("cls");
}void decision1(char T[taille][taille],int Y[taille][taille],int *c1,int *c2,int *c3,int *c4,int *n,int tj[],int ts[])
{																
	if(T[*c1-1][*c2-1]==T[*c3-1][*c4-1])	//decision	
	{		
		ts[0]+=1;
		printf("bravo joueurs 1 gagne 1 points !");				
		Y[*c1-1][*c2-1]=1;
		Y[*c3-1][*c4-1]=1;		
	}
	else
	{
		printf("les deux cases ne correspondent pas !");	
	}
	printf("\nscore :\n");
	for(int i=0;i<*n;i++)
	{
		printf("joueur %d ==> %d\n",i+1,ts[i]);
	}
	printf("\n");
	sleep(4);
	system("cls");
}
void gameover(int *g)
{
//	printf("joueur 1 ==> score :%d \njoueur 2 ==> score :%d \n",*score1,*score2);
	printf("voulez-vous rejouer une autre partie ? (oui=1,non=0) : ");
	scanf("%d",g);
	system("cls");
}
int main()
{
	char T[taille][taille];		//tableau des lettres
	int Y[taille][taille];		//tableau de 0 et 1
	int g=1;					//variable qui permet de continuer ou arretter le jeu
	int c1,c2,c3,c4;			//les case donnees par les joueurs
	int n;						//nombre de joueurs
	int tj[10],ts[10];			//tj : tableau joueurs | ts : tableau des scores
	
	joueurs(&n,tj,ts);
	tj[0]=1;
	remplissage(T);
	tableau_boleen(Y);
	affichage(T);
	comparaison(T,Y,&g);
	while(g==1)
	{
		saisie(&c1,&c2,&c3,&c4,&n,tj);
		verf(T,&c1,&c2,&c3,&c4);
		if(n>1)
		{
			decision(T,Y,&c1,&c2,&c3,&c4,&n,tj,ts);
		}
		else
		{
			decision1(T,Y,&c1,&c2,&c3,&c4,&n,tj,ts);	
		}	
		g=0;
		comparaison(T,Y,&g);
		if(g==0)
		{
		
		for(int i=0;i<n;i++)
		{
			printf("joueur %d ==> %d\n",i+1,ts[i]);
		}
		
			gameover(&g);
			if(g==1)
			{
				joueurs(&n,tj,ts);
				tableau_boleen(Y);
				comparaison(T,Y,&g);
				tj[0]=1;
			}
			if(g==0)
			{
				printf("game over !");
			}
		}	
	}
	getch();
	return 0;	
}
