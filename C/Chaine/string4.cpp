#include<stdio.h>
#include<string.h>
main()
{
	char ch[20];
	char aff[20];
	
	
	puts("donner un verbe : ");
	gets(ch);
	
	int l=strlen(ch);
	
	if(ch[l-2]!='e' || ch[l-1]!='r')
	{
		printf("invalid ! ");
	}
	else
	{
		ch[l-2]='\0';
		aff[0]='\0';
		strcat(aff,"je ");
		strcat(aff,ch);
		strcat(aff,"e");
		puts(aff);
		
		aff[0]='\0';
		strcat(aff,"tu ");
		strcat(aff,ch);
		strcat(aff,"es");
		puts(aff);
		
		aff[0]='\0';
		strcat(aff,"il ");
		strcat(aff,ch);
		strcat(aff,"e");
		puts(aff);
		
		aff[0]='\0';
		strcat(aff,"nous ");
		strcat(aff,ch);
		strcat(aff,"ons");
		puts(aff);
	
		aff[0]='\0';
		strcat(aff,"vous ");
		strcat(aff,ch);
		strcat(aff,"ez");
		puts(aff);	
		
		aff[0]='\0';
		strcat(aff,"ils ");
		strcat(aff,ch);
		strcat(aff,"ont");
		puts(aff);		
	}
}
