#include <stdio.h>
int main(){
    int i,j;
    int n=5;
    for (i=0;i<=n-1;i++)
    {
        for(j=n;j>=i;j--)
            {
                printf(" ");
            }
        
      for(j=2*i+1;j>=1;j--)
        {
            printf("%d",j);
        } 
        
        printf("\n");
    }
return 0;
}