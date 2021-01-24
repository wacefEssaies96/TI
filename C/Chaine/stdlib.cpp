#include <stdio.h>
#include <stdlib.h>
 main()
{
 long n;
 char str[200];
 do
    {
     puts("Entrer un nombre :");
     scanf("%ld",&n);
     printf("Entrer  = %ld\n",n);
     printf("base 2  = %s\n", ltoa(n,str,2));
     printf("base 8  = %s\n", ltoa(n,str,8));
     printf("base 16 = %s\n", ltoa(n,str,16));
    }
 while(n);
 return 0;
}
