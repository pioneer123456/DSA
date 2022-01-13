#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int A[],int n,int k);

int main(){

int i;
int k = 2;
int A[5]={4,6,5,2,1};
bubble_sort(A,5,k);
for(i=0;i<5;i++){
        printf("%d",A[i]);
}
}

void bubble_sort(int A[],int n,int k)
{
   int i,j,temp;
    for(i=0;i<n-1;i++)
    {
    for(j=0;j<n-i-1;j++)
    {
        if(A[j]>A[j+1])
        {
        temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
        }
        if(i==k)
        {

            for(int m=0;m<n;m++)
            {
                printf("%d ",A[m]);
            }
            printf("\n ");
        }
    }
}
}