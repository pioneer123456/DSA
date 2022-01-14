# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    float sum=0;
    for(int i=1;i<n;i++)
    {
        sum=(i*i*i);
        cout<<"1/"<<sum<<"+";
    }
    sum=(n*n*n);
    cout<<"1/"<<sum<<endl;;

return 0;
}