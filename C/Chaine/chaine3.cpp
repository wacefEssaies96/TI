#include<stdio.h>
main()
{
	char ch[100];
	int i;
	int L=0;
	int x=0;
	int Y=0;
	int j=1;
	int Z;

	
	printf("ecrire : ");
	gets(ch);
	for(i=0;i<100;i++)					/*longeur*/
	{
		if(ch[i]!='\0')
		{
			L++;
		}
		else{
			break;
		}
	}
	printf("L = %d\n",L);
	x=L;
	Z=L;
	for(i=0;(i<L);i++)				/*jcp*/
	{
		if(ch[i]!='\0')
		{
			Y=L-(x-1);
			x--;
			if(Y<L+1)
			{
				for(int k=0;k<Y;k++)
				{
					printf("%c",ch[k]);	
				}
				printf("\n");
			}
		}
	}
	for(i=0;(i<L*2);i++)
	{
		if(ch[i]=='\0')
		{
			Z=(L+1)-j;
			j++;
//printf("Z = %d\n",Z);			
			for(int l=0;l<Z;l++)
			{
				printf("%c",ch[l]);	
			}
			printf("\n");
		}
	}
	
		
}
