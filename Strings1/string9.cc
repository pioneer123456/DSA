//To find a longest common prefix
# include <bits/stdc++.h>
using namespace std;
// Function to find the longest common prefix
string prefix(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    int i=0;
    while(i<n1 && i<n2 && s1[i]==s2[i])
    {
        i++;
    }
    return s1.substr(0,i);

}
// Driver program to test above function
string lcp(vector <string> &l)
{
    vector <string> :: iterator it;
    string s1=l[0];
    for (auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<endl;
    }
    for(int i=1;i<=l.size()-1;i++)
    {
        s1=prefix(s1,l[i]);
    }
    return s1;
}


//Main function
int main()
{
    vector <string> li(3);
    for(int i=0;i<3;++i)
    {
        cin>>li[i];
    }
    //Find the lowest common prefix
    string prefix = lcp(li);
    if (prefix.length())
        cout<<"The longest common prefix is "<<prefix<<endl;
    else
        printf("There is no common prefix");
    return 0;
}