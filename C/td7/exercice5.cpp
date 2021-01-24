#include<stdio.h>
#include<stdlib.h>
//struct etatcivil{celibataire,marie,veuf,divorce};
typedef struct etatcivil{
	int celibataire;
	int marie;
	int veuf;
	int divorce;
}etat;
typedef struct employe{
 	char matricule[20];
 	char nom[20];
 	char adresse[50];
 	int age;
 	char grade[20];
 	char nom_conjoint[20];
 	int nombre_enfant;
 	int sit;
}employes;
	 
void saisie(int n,employe employes[],etatcivil et[])
{
	for(int i=0;i<n;i++)
	{
		printf("employee %d : \n",i+1);
		printf("donner la matricule : ");
		scanf("%s",&employes[i].matricule);
		printf("donner votre nom : ");
		scanf("%s",&employes[i].nom);
		printf("donner votre adresse : ");
		scanf("%s",&employes[i].adresse);
		printf("donner votre age : ");
		scanf("%d",&employes[i].age);
		printf("donner le nom du conjoint : ");
		scanf("%s",&employes[i].nom_conjoint);
		printf("donner le nombre d'enfant : ");
		scanf("%d",&employes[i].nombre_enfant);
		printf("1:celib\n2:marie\n3:veuf\n4:divorce\nchoisir l'etat civile :  ");
		scanf("%d",&employes[i].sit);
//		switch(employes[i].sit){
//			case 1:{
//				et[i].celibataire=1;
//				break;
//			}
//			case 2:{
//				et[i].marie=1;
//				break;
//			}
//			case 3:{
//				et[i].veuf=1;
//				break;
//			}
//			case 4:{
//				et[i].divorce=1;
//				break;
//			}
//		}
		system("cls");
	}	
}
void affichage(int n,employe employes[])
{
	for(int i=0;i<n;i++){
		printf("employee %d : \n",i+1);
		printf("matricule : %s\n",employes[i].matricule);
		printf("nom : %s\n",employes[i].nom);
		printf("adresse : %s\n",employes[i].adresse);
		printf("age : %d\n",employes[i].age);
		printf("nombre d'enfant : %d\n",employes[i].nombre_enfant);
		if(employes[i].sit){
			printf("celib\n");
		}
		if(employes[i].sit){
			printf("marie\n");
		}
		if(employes[i].sit){
			printf("veuf\n");
		}
		if(employes[i].sit){
			printf("divorce\n");
		}
		printf("nom conojoint : %s\n",employes[i].nom_conjoint);
		printf("\n\n\n");
	}
}
//void saisie1(int n,int *x){
//	printf("donner l'etat civil de 1 a 4");
//	scanf("%d",x);
//	
//}

main(){
	int n;
	int x;
	employe employes[n];
	etatcivil et[n];
	printf("donner le nombre des emplyees : ");
	scanf("%d",&n);
//	saisie1(n,et,&x);
	
	
	saisie(n,employes,et);
	affichage(n,employes);
}
