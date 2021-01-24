#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 1024

int main(){
    char *t[10];
    char ch[200];
    char **p=NULL;

    for(p=t;p<t+10;p++){
        printf("Donnez la chaine %d : ",p-t+1);
        scanf("%s",ch);

        p=malloc((strlen(ch)+1)*sizeof(char*));
        strcpy(**p,ch);

    }
    for(p=t;p<t+10;p++){
        printf("%s\n",p);
    }
}
