#include<stdio.h>
#include<stdlib.h>
int main () {
    float prixtcc,prixht;
    char category;
    printf("give the prise  without tva: \t");
    scanf("%f",&prixht);
    printf("give the gategorie [a or b or c] : \n");
    scanf("%s",&category);
    if(category == 'A' || category=='a')
    {
        prixtcc=prixht*1.07;
    } else if (category=='B' || category=='b')
    {
        prixtcc=prixht*1.20;
    }
    else if (category=='C' || category=='c')
    {
        prixtcc=prixht*1.25;
    }
    else 
    {printf("invalide category try again !");
    return 1; }


    printf("le prix TCC est : %f",prixtcc);
    return 0;
      
}