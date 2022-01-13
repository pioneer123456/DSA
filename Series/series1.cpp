// print the series "1+1/2+1/8....."
# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        cout<<sum+1.0/i<<" ";    
    }
    return 0;
}
