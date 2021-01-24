#include<stdio.h>
#include<string.h>	
main()
{	
	char ch[20];
	int i,j,L;
	int esp=0;
	
	printf("donner un mot : ");
	gets(ch);
	L=strlen(ch);
	
//	puts(ch);
//	printf("%d",L);
	
	for(i=0;i<L;i++,esp++)	
	{
	
		printf("%c",ch[i]);
		for(esp=0;esp<L-2;esp++){
			printf(" ");
		}
	printf("a");
	}
}
