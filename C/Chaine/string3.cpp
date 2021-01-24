#include<stdio.h>
#include<string.h>
main()
{
	char ch1[20];
	char ch2[20];
	char ch3[20];
	
	puts("donner la chaine 1 : ");
	gets(ch1);
	puts("donner la chaine 2 : ");
	gets(ch2);
	
	int c1=strlen(ch1)/2;
	int c2=strlen(ch2)/2;
	printf("%d %d\n",c1,c2);
	
	strncpy(ch3,ch1,strlen(ch1)/2);
	strncat(ch3,ch2,strlen(ch2)/2);
	
	puts(ch3);
	
	
}
