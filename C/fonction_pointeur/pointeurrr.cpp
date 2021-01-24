#include<stdio.h>
void carre2(int a, int * b) 
{
 *b = a*a;
}
int main()
{
 int n, b=0;
 printf("n ? ");
 scanf("%d", &n);
 carre2(n, &b);
 printf("carre2 = %d\n", b);
 return 0;
}
