#include<stdio.h>
int main (){
    int x;
    printf("give an intiger (1 to 5) : \t" );
    scanf("%d",&x);
    switch (x)
    {
    case 1 : x=x+4 ; break;
    case 2 : x=x+8; break;
    case 3 : x=x+12; printf("x=%d\n",x); break;
    case 4 : x=x+16;break;
    case 5 : x=x+20;break;
    default : printf(" number incorrect");
    }
    return 0;
}