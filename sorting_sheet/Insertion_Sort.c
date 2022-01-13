#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int A[],int n,int k);

int main(){

int i;
int k = 2;
int A[5]={4,6,20,2,1};
insertion_sort(A,5,k);
for(i=0;i<5;i++){
        printf("%d",A[i]);
}
}

void insertion_sort(int A[],int n,int k)
{
    int i,currNum; 
    for (i=1;i<n;i++){
        currNum=A[i];
        while(i>0 && A[i-1]>currNum)
            {
                A[i]=A[i-1];
                i=i-1;
                A[i]=currNum;

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