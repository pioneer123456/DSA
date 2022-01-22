# include<iostream>
# include<bits/stdc++.h>
# include <math.h>
# include <string.h>
# include <stack>
using namespace std;
int isOperator(char ch)
{
    if(ch =='+'|| ch=='-' || ch =='*' || ch=='/'||ch == '^')
    {
        return 1;
    }
    return -1;
}
int isOperand(char ch)
{
    if (isdigit(ch))
        return 1;
    return -1;
}
float get_num(char ch)
{
    int value;
    value=ch;
    return float(value-'0');
}
float sume(int a,int b, char op)
{
    if (op=='+')
    {
        return a+b;
    }
    else if (op=='*')
    {
        return a*b;
    }
    else if (op=='-')
    {
        return b-a;
    }
    else if (op=='/')
    {
        return b/a;
    }
    else if (op=='^')
    {
        return pow(b,a);
    }
    return INT_MIN;
}
float post_fix(string s)
{
    int a,b;
    stack <float> stk;
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        if(*it==' ')
        {
            continue;
        }
        else if(isOperator(*it)== 1)
        {
            a = stk.top();
            stk.pop();
            b=stk.top();
            stk.pop();
            stk.push(sume(a,b,*it));
        }
        else if(isOperand(*it)==1)
        {
            stk.push(get_num(*it));
        }
    }
    return stk.top();
}
int main()
{
    int n;
    cin>>n;
    string s;
    getline(cin>>ws,s);
    cout<<s<<endl;
    cout<<post_fix(s);

}