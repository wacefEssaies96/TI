#include<stdio.h>
#include<string.h>
int function(int, int[], char[]);
 
int main()
{
      int i, a = 20;
      int arr[5] = {10,20,30,40,50};  
      char str[30] = "\"fresh2refresh\"";
 
      printf("    ***values before modification***\n");  
      printf("value of a is %d\n",a);  
 
      for (i=0;i<5;i++)
      {
         // Accessing each variable
         printf("value of arr[%d] is %d\n",i,arr[i]);  
      }
      printf("value of str is %s\n",str); 
      printf("\n    ***values after modification***\n"); 
      a= function(a, &arr[0], &str[0]);
      printf("value of a is %d\n",a);  
      for (i=0;i<5;i++)
      {
         // Accessing each variable
         printf("value of arr[%d] is %d\n",i,arr[i]);  
      }
      printf("value of str is %s\n",str); 
      return 0;
}
 
int function(int a, int *arr, char *str)
{
    int i;
 
    a = a+20;
    arr[0] = arr[0]+50;
    arr[1] = arr[1]+50;
    arr[2] = arr[2]+50;
    arr[3] = arr[3]+50;
    arr[4] = arr[4]+50;
    strcpy(str,"\"modified string\"");
 
    return a;
 
}
