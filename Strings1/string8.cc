//To check if a phrase is a palindrome
#include<bits/stdc++.h>
using namespace std;
bool is_palin(string s)
{
    //convert string to lowercase
    transform(s.begin(),s.end(),s.begin(),::tolower);
    //remove all non-alphanumeric characters
    s.erase(remove_if(s.begin(),s.end(),[](char c){return !isalpha(c);}),s.end());
    //check palindrome
    string str = string(s.rbegin(),s.rend());
    cout<<str<<endl;
    if (str==s)
        return true;
    return false;



}



int main()
{
    string s;
    getline(cin,s);
    if(is_palin(s))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
