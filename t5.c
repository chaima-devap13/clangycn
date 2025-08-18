#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
    // imposable ou pas  خاضع للضريبة
    int age ;
    char sexe[10];
    printf("give the age : \n");
    scanf("%d",&age);
    printf("give the sexe : \n");
    scanf("%s",sexe);
    if  ((strcmp(sexe,"homme")==0 && age>=20 )|| (strcmp(sexe,"femme")==0 && (age > 18 || age<35)) ){
    
     printf("vous etes soumis a l'impot \n"); }
     else printf("vous etes n'etes pas soumis a l'impot");
    return 0;
}