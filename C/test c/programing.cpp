#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char ch[20];
	int L;
	int esp,esp2;
	int i,j,k;
	printf("donne un mot : ");
	gets(ch);
	system("cls");
	L=strlen(ch);
	for(esp2=0;esp2<L/2;esp2++){
		printf(" ");
	}
	puts(ch);
	for(i=1,j=L-1;i<L,j>1;i++,j--)
	{	
	for(esp2=(L/2)-i;esp2>0;esp2--){
		printf(" ");
	}
		printf("%c",ch[i]);
		for(esp=0;esp<L;esp++){
			printf(" ");
		}
		printf("%c",ch[j-1]);
		printf("\n");
	}
	
	for(int i=L;i>=0;i--)
	{
		if(ch[i]!='\0'){
			printf("%c",ch[i]);
		}
	}
	printf("\n");


	
}
