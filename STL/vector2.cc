#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v(5);
    for(int i=0;i<5;++i)
    {
        cin>>v[i];
    }
    //Use of iterator
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    //Print in reverse order
    for(auto it=v.rbegin();it!=v.rend();it++)
    {
        cout<<*it;
    }
    cout<<endl;



}