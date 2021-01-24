#include<stdio.h>
typedef struct FRIDGE{
 int number;
}FRIDGE;

typedef struct PERSON{
 int age;
 struct FRIDGE fridge;
}PERSON;

main(){
FRIDGE fr;
fr.number=1;

PERSON me;
me.age=1;
me.fridge = fr;
}
