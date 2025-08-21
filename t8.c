#include<stdio.h>
#include<math.h>
int main () {
    int n,i; float s=0;
    printf("donne la une valeur pour n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         s=s+(1.0/i);
    }
    printf("s= %.2f",s);
    return 0;
}