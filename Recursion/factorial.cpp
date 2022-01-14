// Print factorial of a number using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n==1)
    { 
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
return 0;

}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
}