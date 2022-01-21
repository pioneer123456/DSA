#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v,v1,v2;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<v[0]<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(0)<<"\n";
    //To print first and last
    cout<<v.front()<<" "<<v.back()<<endl;
    //To get the max element
    cout<<v.max_size()<<endl;
    //To swap elements
    v1.swap(v);
    cout<<v1[0]<<endl;
    //To clear the vector
    v1.clear();
    cout<<v1[0]<<endl;
    if(v1.empty())
    {
        cout<<"Vector is empty\n";
    }


}