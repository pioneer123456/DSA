#include <stdio.h>
int main(){
    int i,j;
    int n=5;
    for (i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            {
                printf(" ");
            }
        
      for(j=1;j<=i;j++)
        {
            printf("* ");
        } 
        
        printf("\n");
    }
    for(i=n+1;i<=n+n;i++)
    {
        for(j=1;j<=i-n;j++)
            {
                printf(" ");
            }
        for(j=0;j<=2*n-i;j++)
        {
            printf("* ");
        } 
        printf("\n");
        

    }
return 0;
}