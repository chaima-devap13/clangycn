            
#include<stdio.h>
#include<stdlib.h>
 int fact(int *p)
 {
    int i,f;
    f=1;
    for(i=2;i<=*p;i++)
    {
        f=f*i;
    }
    return f;
 }
 int main () {
    int n,*e;
    printf("donner un nombre : \t");
    scanf("%d",&n);
    e=NULL;
    e=malloc(sizeof(*e));
    *e=n;
    printf("le factoriel : %d",fact(e) );
    free(e);
    return 0;

 }