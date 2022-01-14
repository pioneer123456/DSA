//To print series 1+3+9+27+81 upto n terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Ente the number of terms:";
    cin>>n;
    int sum=0;
    for (int i=1;i<n;i++)
    {
        sum=i*i*i;
        cout<<sum<<"+";
    }
    sum=n*n*n;
    cout<<sum<<endl;



}