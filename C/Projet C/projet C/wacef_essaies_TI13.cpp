#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<conio.h>
main()
{
	int g;						//variable qui permet d'arretter le bouclage du jeu
	int i,j;					//les compteurs
	int score1=0,score2=0;		//les scores des joueurs
	int c1,c2,c3,c4;			//les case donnees par les joueurs
	int joueur1=1,joueur2=0;	//nombre de joueurs
	int Y[4][4];				//matrice binaire
	char T[4][4];				//tableau de charactere
	
	
	for(i=0;i<4;i++)			//saisie des donnée
	{
		for(j=0;j<4;j++)  
		{
			printf("donner la valeur de la case T[%d][%d] : ",i+1,j+1);
			scanf("%s",&T[i][j]);
			system("cls");
		}
	}
	for(i=0;i<4;i++)			//affectation de tous les case avec 0
	{
		for(j=0;j<4;j++)
		{
			Y[i][j]=0;		
		}
	}						
	
	printf("     1   2   3   4\n");	
	printf("   -----------------\n");
	for(i=0;i<4;i++)			//affichage de la grille pendant 5 secondes
	{
		printf(" %d ",i+1);
		for(j=0;j<4;j++)
		{
			printf("| %c ",T[i][j]);
		}
		printf("|\n   -----------------\n");
	}	
	printf("Vous avez 5 secondes pour memoriser toutes les lettres !\n");
	sleep(5);
	system("cls");
		
	printf("     1   2   3   4\n");	
	printf("   -----------------\n");
	for(i=0;i<4;i++)			//comparaison entre les deux tableaux
	{
		printf(" %d ",i+1);
		for(j=0;j<4;j++)
		{
			if (Y[i][j]==0)
			{
				printf("|   ");
			}
			else 
			{
				printf("| %c ",T[i][j]);
			}
		}
		printf("|\n   -----------------\n");	
	}
	g=1;
	while(g==1)
	{
		if(joueur1==1)
		{
			do
			{
				do
				{
					printf("joueur 1:\nDonner la case 1 : ");
					scanf("%d %d",&c1,&c2);	
					if(c1>=5||c1<=0||c2>=5||c2<=0)
					{
						printf("veuillez entrer une valeur entre 1 et 4 !\n");
					}
				}while(c1>=5||c1<=0||c2>=5||c2<=0);
				do
				{
					printf("Donner la case 2 : ");
					scanf("%d %d",&c3,&c4);
					if(c3>=5||c3<=0||c4>=5||c4<=0)
					{
						printf("veuillez entrer une valeur entre 1 et 4 !\n");
					}
					if(c1==c3&&c2==c4);
					{
						printf("invalid !\n");
					}
				}while(c3>=5||c3<=0||c4>=5||c4<=0);
			}while(c1==c3&&c2==c4);
			system("cls");
		}
		else if (joueur2==1)
		{
			do
			{
				do
				{
					printf("joueur 2:\nDonner la case 1 : ");
					scanf("%d %d",&c1,&c2);	
					if(c1>=5||c1<=0||c2>=5||c2<=0)
					{
						printf("veuillez entrer une valeur entre 1 et 4 !\n");
					}
				}while(c1>=5||c1<=0||c2>=5||c2<=0);
				do
				{
					printf("Donner la case 2 : ");
					scanf("%d %d",&c3,&c4);
					if(c3>=5||c3<=0||c4>=5||c4<=0)
					{
						printf("veuillez entrer une valeur entre 1 et 4 !\n");
					}
					if(c1==c3&&c2==c4);
					{
						printf("invalid !\n");
					}
				}while(c3>=5||c3<=0||c4>=5||c4<=0);	
			}while(c1==c3&&c2==c4);
			system("cls");	
		}
		printf("     1   2   3   4\n");	
		printf("   -----------------\n");
		for(i=0;i<4;i++)		//verification des deux cases
		{
			printf(" %d ",i+1);
			for(j=0;j<4;j++)	
			{	
				if (i==c1-1&&j==c2-1)
				{
					printf("| %c ",T[c1-1][c2-1]);
				}
				else if (i==c3-1&&j==c4-1)
				{
					printf("| %c ",T[c3-1][c4-1]);
				}	
				else 
				{
					printf("|   ");
				}
			}
			printf("|\n   -----------------\n");
		}
		if(T[c1-1][c2-1]==T[c3-1][c4-1])	//les joueurs
		{	
			if(joueur1==1)
			{
				joueur1=1;
				joueur2=0;
				score1+=1;
				printf("bravo joueur 1 gagne un point, score %d-%d ! ",score1,score2);
			}	
			else if(joueur2==1)
			{
				joueur2=1;
				joueur1=0;
				score2+=1;
				printf("bravo joueur 2 gagne un point, score %d-%d ! ",score1,score2);	
			}		
		}
		else
		{
			if(joueur1==1)
			{
				joueur1=0;
				joueur2=1;
			}
			else if(joueur2==1)
			{
				joueur1=1;
				joueur2=0;
			}
			printf("les deux cases ne correspondent pas ! score : %d-%d",score1,score2);	
		}
		sleep(3);
		system("cls");
		if(T[c1-1][c2-1]==T[c3-1][c4-1])	//affectation des deux cases s'il sont pas differentes		
		{
			Y[c1-1][c2-1]=1;
			Y[c3-1][c4-1]=1;	
		}
		g=0;		
		printf("     1   2   3   4\n");	
		printf("   -----------------\n");
		for(i=0;i<4;i++)			//comparaison entre les deux tableaux
		{
			printf(" %d ",i+1);
			for(j=0;j<4;j++)
			{
				if (Y[i][j]==0)
				{
					printf("|   ");
					g=1;
				}
				else 
				{
					printf("| %c ",T[i][j]);
				}
			}
			printf("|\n   -----------------\n");	
		}
		if(g==0)
		{
			printf("joueur 1 ==> score :%d \njoueur 2 ==> score :%d \n",score1,score2);
			printf("voulez-vous rejouer une autre partie ? (oui=1,non=0) : ");
			scanf("%d",&g);
			system("cls");
			if(g==1)
			{
				score1=0;
				score2=0;
				joueur1=1;
				joueur2=0;
				for(i=0;i<4;i++)			//reinitialisation de la matrice binaire par des zero
				{
					for(j=0;j<4;j++)
					{
						Y[i][j]=0;
					}
				}
				printf("     1   2   3   4\n");	
				printf("   -----------------\n");
				for(i=0;i<4;i++)			//affichage de la matrice vide
				{
					printf(" %d ",i+1);
					for(j=0;j<4;j++)
					{
						if (Y[i][j]==0)
						{
							printf("|   ");
						}
						else 
						{
							printf("| %c ",T[i][j]);
						}
					}
					printf("|\n   -----------------\n");	
				}	
			}	
		}
	}	
	getch();	
}
