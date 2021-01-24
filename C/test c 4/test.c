#include <stdio.h>
#define NPOINTS 2
typedef struct point
    {
       int num;
       float x;
       float y;
       char jcp[20];
       struct date{
       int jour;
       int mois;
       int annee;
       }date;
    }point;
     point courbe[NPOINTS];
int rempl(point courbe[]){
    point *p;
    int i;
    for(p=courbe;p<courbe+NPOINTS;p++)
   {
        printf("numero : ");
        scanf("%d",&p->num);
        printf("x : ");
        scanf("%f",&p->x);
        printf("y : ");
        scanf("%f",&p->y);
        printf("jcp : ");
        scanf("%s",p->jcp);
        printf("date : \n");
        printf("jour : \n");
        scanf("%d",&p->date.jour);
        printf("mois : \n");
        scanf("%d",&p->date.mois);
        printf("annee : \n");
        scanf("%d",&p->date.annee);
    }
}
int main()
{
    int i,n=5;
    int t[n];
    rempl(courbe);

    printf("**** structure fournie ****\n");
    for (i=0;i<NPOINTS;i++)
        printf("numero=%d x=%f y=%f jcp=%s\ndate : %d/%d/%d\n",courbe[i].num,courbe[i].x,courbe[i].y,courbe[i].jcp,courbe[i].date.jour,courbe[i].date.mois,courbe[i].date.annee);
    for(i=0;i<5;i++){
        t[i]=randme(20,0);
    }
    for(i=0;i<5;i++){
        printf("%d\n",t[i]);
    }
}
