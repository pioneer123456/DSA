//Write a program to return the maximum occurring character in the input string, e.g., if the input string is "Java" then the function should return 'a'.
# include <iostream>
using namespace std;
int main()
{
    char str[100];
    int i,j;
    int count[26]={0},max=0;
    char max_char;
    cout<<"Enter the string\n";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        count[str[i]-'a']++;
    }
    






}





