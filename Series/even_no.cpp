//To print n even numbers:
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of even numbers to be printed: ";
    cin>>n;
    for(int i=2;i<=2*n;i+=2)
    {
        cout<<i<<" ";
    }
    return 0;


}