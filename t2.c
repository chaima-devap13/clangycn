#include<stdio.h>
#include<math.h>
int main ( ){
       float  perimater , larg , lon, surface ;
    printf("give the larger and the langer of the rectangle : \n");
    scanf("%f %f",&larg,&lon);
    perimater= (larg+lon)/2;
    surface=larg*lon;
    printf("the perimater is : %.2f \n the surface is : %.2f ",perimater,surface);
    return 0;
}