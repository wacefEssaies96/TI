#include<stdio.h>
#include<string.h>

main()
{
	char ch1[20];
	char ch2[20];
	puts("donner votre prenom : ");
	gets(ch1);
	puts("donner votre nom : ");
	gets(ch2);
	printf("votre nom est compose de %d lettres !",strlen(ch1)+strlen(ch2));
}
