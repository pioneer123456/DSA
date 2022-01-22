//To find if strings are anagrams of each other
#include <iostream>
using namespace std;
bool isanagram(string s1,string s2)
{
    int i;
    int count[256]={0};
    for(i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
    }
    for(i=0;i<s2.length();i++)
    {
        count[s2[i]]--;
    }
    for(i=0;i<256;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isanagram(s1,s2))
    {
        cout<<"Anagrams";
    }
    else
    {
        cout<<"Not anagrams";
    }
    return 0;
}