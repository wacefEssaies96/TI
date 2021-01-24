#include<stdio.h>
#include<string.h>
main()
{
	char ch[10][20];
	char buffer[20];
	int i,j,comp;
	for(i=0;i<10;i++)
	{
		printf("donner le mot %d : ",i+1);
		scanf("%s",ch[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			comp=strcmp(ch[i],ch[j]);
			if(comp>0)
			{
				strcpy(buffer,ch[i]);
				strcpy(ch[i],ch[j]);
				strcpy(ch[j],buffer);				
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		printf("%s\n",ch[i]);
	}

}
