#include<stdio.h>
#include<stdlib.h>
	
typedef struct employe{
	char nom[20];
	char prenom[20];
	float salaire;
	int situation_familiale;
	int enfant;
	int distance;
}employes;
void saisie(int n,employe employes[])
{
	for(int i=0;i<n;i++)
	{
		printf("employee %d : \n",i+1);
		printf("donner votre nom : ");
		scanf("%s",&employes[i].nom);
		printf("donner votre prenom : ");
		scanf("%s",&employes[i].prenom);
		printf("donner le salaire : ");
		scanf("%f",&employes[i].salaire);
		printf("donner la situation familliale (0 ou 1) : ");
		scanf("%d",&employes[i].situation_familiale);
		printf("donner le nombre d'enfant : ");
		scanf("%d",&employes[i].enfant);
		printf("donner la distance de travaille : ");
		scanf("%d",&employes[i].distance);
		system("cls");
	}	
}
void affichage(int n,employe employes[])
{
	for(int i=0;i<n;i++){
		printf("employee %d : \n",i+1);
		printf("nom : %s\n",employes[i].nom);
		printf("prenom : %s\n",employes[i].prenom);
		printf("salaire : %.3f\n",employes[i].salaire);
		printf("situation familliale : %d\n",employes[i].situation_familiale);
		printf("nombre d'enfant : %d\n",employes[i].enfant);
		printf("distance de travaille : %d\n",employes[i].distance);
		printf("\n\n\n");
	}
}
void somme_salaire(int n,float *max,employe employes[]){
	*max=0;	
	for(int i=0;i<n;i++){
		if(employes[i].salaire>*max)
		{
			*max=employes[i].salaire;
		}	
	}
	printf("le salaire le plus grand est : %.3f\n\n\n",*max);
}
void calcul(int n,employe employes[]){
	int i,j;
	float prime=0;
	printf("prime : %.3f\n",prime);
	for(i=0;i<n;i++){
		if(employes[i].enfant>0){
			for(j=1;j<=employes[i].enfant;j++){
				prime+=50;	
			}	
//			printf("prime enfants : %.3f\n",prime);
		}
		if(employes[i].situation_familiale==1){
			prime+=(employes[i].salaire)/10;
		}
//		printf("prime famille : %.3f\n",prime);
		for(j=0;j<employes[i].distance;j++){
			prime+=0.100;
		}
		employes[i].salaire+=prime;
	}
	employes[i].salaire+=prime;
	prime=0;
}
main()
{
	int n;
	float max;
 	employe employes[n];
	printf("donner le nombre des emplyees : ");
	scanf("%d",&n);
	saisie(n,employes);
	affichage(n,employes);
	calcul(n,employes);
	somme_salaire(n,&max,employes);
	affichage(n,employes);
	
}
