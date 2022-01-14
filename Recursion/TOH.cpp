//Tower of Hannoi using recursion
#include <iostream>
using namespace std;
void toh(int n, char from,char to, char aux)
{
    if(n==1)
    {
        cout<<"Move disk 1 from"<<from<<"to"<<to<<endl;
    }
    else
    {
        toh(n-1,from,aux,to);
        cout<<"Move disk "<<n<<"from"<<from<<"to"<<to;
        toh(n-1,aux,to,from);

    }
}


int main()
{
    int n;
    cout<<"Enter the number of disks:";
    cin>>n;
    toh(n,'A','C','B');



return 0;
}