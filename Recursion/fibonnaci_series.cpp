//Print fibonnaci series using recursion
#include <iostream>
using namespace std;
int fibonnaci(int n)
{
    static int n1=0,n2=1,n3;
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout<<n3<<" ";   
         fibonnaci(n-1);    
    }    


}
int main()
{
     int n;
     cout<<"Enter the number of terms:";
     cin>>n;
     int sum=0;
     cout<<"fibonnaci series upto "<<n<<" terms is: 0,1"<<endl;
     fibonnaci(n-2);
return 0;
}