#include<stdio.h>
#include<math.h>
int main () {
    int a,i;
    printf("avec ( for)");
    printf("donne le nombre de depart \t");
    scanf("%d",&a);
    for(i=0;i<10;i++)
    {
        a=a+1;
        printf("%d \n",a);
    }
    printf("\n avec while \n");
    int b,j=0;
    printf("donner le nombre de depart :\t");
    scanf("%d",&b);
    while(j<10) {
        b=b+1;
        j++;
        printf("%d \n",b);
    }
    printf("\n ave do while \n");
    int c,z=0;
    printf("donner le nombre de depart : \t");
    scanf("%d",&c);
    do {
        c=c+1;
        z++;
        printf("%d \n",c);
    } while (z<10);
    return 0;
}