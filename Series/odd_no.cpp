//To print n odd numbers
#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number of odd natural no:";
     cin>>n;
     for(int i=1;i<=2*n;i++)
     {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
     }
}