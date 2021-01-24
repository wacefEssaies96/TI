#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<conio.h>
void saisie_des_donnees_du_joueur1(int *c1,int *c2,int *c3,int *c4)
{	
	do
		{
			do
			{
				printf("joueur 1:\nDonner la case 1 : ");
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

int main()
{
	int c1,c2,c3,c4;
	
	saisie_des_donnees_du_joueur1(&c1,&c2,&c3,&c4);
	printf("%d %d\n%d %d",c1,c2,c3,c4);
}
