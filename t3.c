#include<stdio.h>
#include<math.h>
int main () { 
    // l'echange 1

   int a,b,c=0,d,e;
  printf("give two numbers to change : \n ");
  scanf("%d %d",&a,&b); printf("\n");
  c=a;
  a=b;
  b=c;
  printf(" a= %d \t b=%d",a,b);
 printf("\n");
  printf("give two numbers to change : ");
  scanf("%d %d",&d,&e); printf("\n");
  d=d-e;
  e=e+d;
  d=e-d;
  
  printf("d= %d \t e=%d",d,e);
  

  return 0;
}