#include <stdio.h>
int main(){
    int i,j;
    int n=5;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if (j==i || j+i==n-1)
                {
                    printf("%d",i+1);
                }
                
                else
                {
                    printf(" ");
                }
                
            }
        
      
        
        printf("\n");
    }
   
return 0;
}