#include<stdio.h>
int main () { // l'age d'un persone
    int age,year;
    printf("give the birth year : \t");
    scanf("%d",&year);
    age=2025-year;
    printf("your age is : %d",age);
    return 0;
}