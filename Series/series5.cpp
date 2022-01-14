// print exponetial series 1^1+2^2+3^3+4^4+5^5+6^6+7^7+8^8+9^9+10^10.. upto n terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cout<<i<<"^"<<i<<"+";
    }
    cout<<n<<"^"<<n<<endl;
return 0;
}