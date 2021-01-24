#include<stdio.h>
main()
{
	int i;
	int T[5]={7,13,(T[1]-1),(T[2]/3),(T[2]/T[3])};
	
	for(i=0;i<5;i++)
	{
		printf("T[%d]=%d\n",i+1,T[i]);
	}
	
}
