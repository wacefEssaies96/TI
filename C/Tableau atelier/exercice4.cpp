//ecrire un algorithme qui permet de saisir 10 notes de 30etudiant dans une matrice, on reserve la derniere
//colone pour les moyenne de chaque etudiant et la dernier ligne au moyenne de la classe de differrent note
//on saisira aussi les coefficient des differents matiere dans un tableau a 1 dimensien
//2affichages les notes et les moyennes sous forme de bulletin sucessive suivie d'un bulletin de moyenne de cases.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int tab1[50][50];
	int tab2[50];
	int i,j,nbr=0,nbr2=0;
	float moy=0.0,somme=0.0,somme2=0.0,moy2=0.0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("etudiant %d donner la note %d : ",i+1,j+1);
			scanf("%d",&tab1[i][j]);
		}
		system("cls");
	}
	for(i=0;i<5;i++)
	{	
		printf("donner la coefficient de la matiere %d : ",i+1);
		scanf("%d",&tab2[i]);
	}
	system("cls");
	for(i=0;i<5;i++)
	{
		printf("|%d	 ",tab2[i]);
	}
	printf("\n------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("|%d	 ",tab1[i][j]);
			somme+=(tab1[i][j]*tab2[i]);
			nbr+=1;
		}
		moy=(somme/nbr);
		somme2+=moy;
		nbr2+=1;
		nbr=0;
		somme=0;
		printf("|%.1f  |",moy);
		printf("\n------------------------------------------------\n");
		if(i==4)
		{
			moy2=(somme2/nbr2);
			printf("la moyenne de la classe est : ");
			printf("%.1f",moy2);
		}
	}
	getch();		
}

