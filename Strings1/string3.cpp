//To check if strings are rotations of each other
# include <iostream>
# include <bits/stdc++.h>
using namespace std;
bool find_rotation(string s1,string s2)
{
    int i,j;
    string s3 = s1+s1;
    for(i=0;i<s3.length();i++)
    {
        if(s3[i]==s2[0])
        {
            for(j=0;j<s2.length();j++)
            {
                if(s3[i+j]!=s2[j])
                {
                    break;
                }
            }
            if(j==s2.length())
            {
                return true;
            }
            return false;
        }
    }
    
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(find_rotation(s1,s2))
    {
        cout<<"They are rotation";
    }
    else
    {
        cout<<"No rotation";
    }
}