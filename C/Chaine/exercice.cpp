#include<stdio.h>
main()
{
	char txt[200];
	int L=0;
	int i;
	printf("ecrire une phrase : \n");
	scanf("%s",txt);
//	printf("%c",txt);
	
//	for(i=0;i<200;i++)
//	{
//		if(txt[i]=='\0')
//		{
//			L=i;
//			break;
//		}
//	}
 for (L=0;txt[L];L++)
     ;
	printf("%d",L);
	
//	for(i=30;i>=0;i--)
//	{
//		printf("%c",txt[i]);	
//	}


	

}
