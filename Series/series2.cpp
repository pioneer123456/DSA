//print the series 1+2+4+8+16+32....
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=pow(2,i);
        cout<<sum<<"+";
    }

}