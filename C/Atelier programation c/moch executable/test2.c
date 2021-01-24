#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char ch1[20]={"wacefessaies"};
    char ch2[10]={"blablalba"};
    int i,j;
    for(i=9,j=0;i<20;i++,j++){
        ch1[i]=ch2[j];
    }
    printf("%s",ch1);
}
