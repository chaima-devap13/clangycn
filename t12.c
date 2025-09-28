#include<stdio.h>
#include<math.h>
  int main () {
    int i,avrd,s=0;
    printf("give 5 intigers : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&avrd);
        s=s+avrd;
    }
    avrd=(s/5);
    printf(" the average is : %d\n",avrd);
    return 0 ;
  }