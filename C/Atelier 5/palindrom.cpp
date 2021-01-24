#include<stdio.h>
main()
{
	int n=5;
	
	char tab1[n];
	char tab2[n];
	int i,j;
	int egal;
	
	for(i=0;i<n;i++)
	{
		printf("donner un caractere : ");
		scanf("%s",&tab1[i]);	
	}
	for(i=0;i<n;i++)
	{
		printf("%c",tab1[i]);	
	}
	
	for(i=0;i<n;i++)
	{
		tab2[i]=tab1[n-i-1];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%c",tab2[i]);	
	}
	j=1;
	egal=1;
	for(i=0;i<n;i++)
	{
		if(tab1[i]!=tab2[i])
		{
			egal=0;
			break;
		}
	}
	printf("\n");
	if(egal==1)
	{
		printf("le mot est un palindrome");
	}
	else{
	printf("le mot n'est pas un palindrome");
	}
	
}
