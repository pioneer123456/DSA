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
            if (j==1 || j==i)
            {
            printf("%d ",i);
            }
            else
            { printf("  ");}
            
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
            if (j==0 || j==2*n-i)
            {
            printf("%d ",2*n-i);
            }
            else
            { printf("  ");}
        } 
        printf("\n");
        

    }
return 0;
}