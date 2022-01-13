//To print n prime numbers:
#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number of prime numbers to be printed: ";
     cin>>n;
     for(int i=0;i<n;i++)
     {
        if(i==0||i==1)
        {
            cout<<i<<" ";
        }
        else
        {
            int flag=0;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<i<<" ";
            }
                
        }
        
        


     }

     

}