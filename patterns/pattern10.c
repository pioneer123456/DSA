#include <stdio.h>
int main(){
    int i,j;
    int n=5;
   
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
            printf("%c ",65+2*n-i);
            }
            else
            { printf("  ");}
        } 
        printf("\n");
        

    }
return 0;
}