#include <stdio.h>
#include <stdlib.h>
struct Person{
    char prenom[100];
    char nom[100];
    int age;

};

int main()
{   int x;
    int m=0;
    int continu = 1 ;
    struct Person p1;
    while(continu){
        printf("type your name : ");
        scanf("%s",&p1.prenom);
        printf("type your second name : ");
        scanf("%s",&p1.nom);
        printf("enter your age : ");
        scanf("%d",&p1.age);
        printf("the person p1 name is %s \n",p1.prenom);
        printf("the person p1 age is %s \n" ,p1.nom);
        printf("the person p1 age is %d \n",p1.age);
        printf("type 1 if you want to add other Person name or type 0 to close program : ");
        scanf("%d",&continu);

    }


    return 0;
}
