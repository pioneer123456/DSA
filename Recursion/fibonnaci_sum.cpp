//print fibonnaci sum using recursion
#include <iostream>
using namespace std;
int fib_sum(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib_sum(n-1) + fib_sum(n-2) + 1;

}
int main()
{
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<"fibonnaci sum upto "<<n<<" terms is: "<<fib_sum(n)<<endl;
}