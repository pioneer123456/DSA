//Reverse natural number;
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of reverse natural numbers to be printed: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }
}