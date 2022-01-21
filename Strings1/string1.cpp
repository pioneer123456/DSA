//Write a program to return the maximum occurring character in the input string, e.g., if the input string is "Java" then the function should return 'a'.
# include <iostream>
# include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    
    int count[256]={0};
    int max=0;
    char result;
    for(int i=0;i<s.length();i++)
    {
        count[s[i]]++;
        if(count[s[i]]>max)
        {
            max=count[s[i]];
            result=s[i];
        }
    }
    cout<<s.length()<<result<<max<<endl;

    return 0;

}




