#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=3;
    int m=3;
    int **A;
    int **p=NULL;
    int *p1=NULL;
    int i;

    p=malloc(n*sizeof(*p));

    for(i=0;i<n;i++){
        p[i]=malloc(m*sizeof(**p));
        if(p[i]==NULL){
            printf("erreur ! ");
            free(p);
            exit(main);
        }
    }
    //printf("%d\n",sizeof(A+n));

    for(p=A;p<A+n;p++){
        for(p1=p;p1<p+m;p1++){
            printf("Donner l'element : ");
            scanf("%d",p1);
        }
    }
       for(p=A;p<A+n;p++){
        for(p1=p;p1<p+m;p1++){
            printf("%d ",*p1);
        }
        printf("\n");
    }
}
