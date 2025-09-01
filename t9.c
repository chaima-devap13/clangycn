#include<stdio.h>
#include<math.h>
int main ()
{  int n,i,f=1;
    printf("donne la valeur de n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
  printf("f= %d",f);
  return 0;  
}
// factorial number