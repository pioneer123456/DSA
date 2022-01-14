#include <stdio.h>
int main(){
    int i,j;
    int n=5;
    for (i=0;i<n;i++)
    {
      for(j=n;j=n-i;j--)
        {
            printf(" ");
        } 
      for(j=0;j<=i;j++)
        {
            printf("*");
        } 
        printf("\n");
    }
return 0;
}