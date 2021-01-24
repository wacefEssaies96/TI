#include<stdio.h>
int multi_2(int x)
{
	int res_1;
	if(x%2==0)
	{
		res_1=1;		
	}
	else{
		res_1=0;
	}
	return res_1;	
}
int multi_3(int x)
{
	int res_2;
	if(x%3==0)
	{
		res_2=1;		
	}
	else{
		res_2=0;
	}
	return res_2;	
}
int multi_6(int x)
{
	int res_3;
	if(x%6==0)
	{
		res_3=1;		
	}
	else{
		res_3=0;
	}
	return res_3;	
}



main()
{
	int x;
	int a1,a2,a3;
	printf("donner x : ");
	scanf("%d",&x);
	a1=multi_2(x);
	a2=multi_3(x);
	a3=multi_6(x);
//	printf("a1 %d\na2 %d\na3 %d\n",a1,a2,a3);
	if(a1==1){
		printf("%d est multiple de 2 !\n",x);
	}
	else{
		printf("%d n'est pas multiple de 2 !\n",x);
	}
	if(a2==1){
		printf("%d est multiple de 3 !\n",x);
	}
	else{
		printf("%d n'est pas multiple de 3 !\n",x);
	}
	if(a3==1){
		printf("%d est multiple de 6 !\n",x);
	}
	else{
		printf("%d n'est pas multiple de 6 !\n",x);
	}
	
}
