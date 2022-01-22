// Program to remove all duplicates from a string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void remove_duplicates(string s)
{
    int i,j;
    for(i=0;i<s.length();i++)
    {
        for(j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                s.erase(j,1);
                j--;
            }
        }
    }
    cout<<s;

}
int main()
{
    string s;
    cin>>s;
    remove_duplicates(s);
    return 0;
}