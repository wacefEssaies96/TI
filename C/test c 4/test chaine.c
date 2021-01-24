#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch1[20]={"chaine"};
    char ch2[20]={"chaonzee"};
    int i=0;
    int l1,l2;
    l1=strlen(ch1)+1;
    l2=strlen(ch2)+1;
    printf("l1=%d\nl2=%d\n",l1,l2);
    int t[l1];
    if(l1==l2){
        for(i=0;i<l1;i++){
            if(ch1[i]==ch2[i]){
                t[i]=1;
            }
            else{
                t[i]=0;
            }
        }
    }
    else{
        for(i=0;i<l1;i++){
            t[i]=0;
        }
    }
    for(i=0;i<l1;i++){
        printf("%d  ",t[i]);
    }
}
