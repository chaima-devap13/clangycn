#include<stdio.h>
#include<math.h>
  int main () {
    int s; float avrd=0;
    printf("give the first number");
    scanf("%d",&s);
    avrd=avrd+s;
    printf("give the second number");
    scanf("%d",&s);
    avrd=avrd+s;
    printf("give the third number");
    scanf("%d",&s);
    avrd=avrd+s;
    printf("give the fourth number");
    scanf("%d",&s);
    avrd=avrd+s;
    printf("give the fifth number");
    scanf("%d",&s);
    avrd=avrd+s;
    avrd=avrd/5;
    printf("the average is %f",avrd);
    return 0 ;
  }