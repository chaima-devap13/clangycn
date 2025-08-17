#include<stdio.h>
#include<math.h>
int main () {
    // partie de declaration 
    int a,b,c,d;
    float x,xi,x1,x2;
    printf(" donner les coiefficient de l'equation : \n ");
    printf("a= ");
    scanf("%d",&a);
    printf(" b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    // partie de l'analyse 
    if(( a==0 && b==0 && c==0) || (a==0 && b==0 && c==1) ) {
        printf("there is no solutions");
    } else if (a==0 && b==1 && c== 1)
    {
        x=-c/b;
        printf("there is one solution x= %d",x);
    }
    else {
        d=pow(b,2)-(4*a*c);
         if(d<0) 
         {
            printf("there is no solutions ");
         } else if( d==0 ) {
            xi=-b/2*a;
            printf("there is one solution xi= %d", xi);
         } else {
            x1= (-b-sqrt(d)/2*a);
            x2= (-b+sqrt(d)/2*a);
            printf(" there is two solutions \n x1= %d \n x2=%d",x1,x2);
         }
    }
    return 0;
    

}