#include<stdio.h>
#include<string.h>
main()
{
	char ch1[20];
	char ch2[20];
	
	puts("donne la premiere chaine : ");
	gets(ch1);
	
	puts("donner la deuxieme chaine : ");
	gets(ch2);
	
	if(strcmp(ch1,ch2)<0)
	{
		printf("%s precede %s",ch1,ch2);
	}
	if(strcmp(ch1,ch2)>0)
	{
		printf("%s suit %s",ch1,ch2);
	}
	if(strcmp(ch1,ch2)==0)
	{
		printf("%s est egal a %s",ch1,ch2);
	}
	
}
