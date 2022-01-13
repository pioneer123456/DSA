//To print n natural numbers:
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of natural numbers to be printed: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}

