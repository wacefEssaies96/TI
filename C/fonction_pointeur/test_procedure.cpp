#include<stdio.h>
void operation(int x,int y,int *a,int *s,int *m)
{
	*a=x+y;
	*m=x*y;
	*s=x-y;
}

int main()
{
	int a=0,m=0,s=0;
	int x,y;
	printf("donner x et y : ");
	scanf("%d %d",&x,&y);
	operation(x,y,&a,&s,&m);
	printf("a:%d m:%d s:%d",a,m,s);
}
