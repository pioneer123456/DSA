#include <stdio.h>
int main(){
    int i,j;
    int n=5;
    for (i=0;i<=n;i++)
    {
      for(j=0;j<=i;j++)
        {
            printf("%d",n-j);
        } 
        printf("\n");
    }
    for (i=n+1;i<=n+n;i++)
    {
      for(j=0;j<=2*n-i;j++)
        {
            printf("%d",n-j);
        } 
        printf("\n");
    }
return 0;
}