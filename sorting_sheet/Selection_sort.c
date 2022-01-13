#include<stdio.h>
#include<stdlib.h>
void sel_sort(int A[],int n,int k);

int main(){

int i;
int k = 2;
int A[6]={16,23,43,1,31,8};
sel_sort(A,6,k);
for(i=0;i<6;i++){
        printf("%d ",A[i]);
}

}
void sel_sort(int A[],int n,int k){
    int i,pos,min,j;
    for(i=0;i<n-1;i++){
        min=A[i];
        pos=i;
        for (j=i+1;j<n;j++)
        {
        if(min>A[j])
            {
                min=A[j];
                pos=j;
            }
        }
        if(i!=pos)
        {
           A[pos]=A[i];
           A[i]=min;
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