#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s)
{
    stack<char>stk;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            stk.push(s[i]);
        else if (s[i]=='}' && (!stk.empty() || stk.top()=='{'))
        {
            stk.pop();
        }
        else if (s[i]==']' && (!stk.empty() || stk.top()=='['))
        {
            stk.pop();
        }
        else if (s[i]==')' && (!stk.empty() || stk.top()=='('))
        {
            stk.pop();
        }
    }
    return stk.empty()?"YES":"NO";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        cout << isBalanced(str) << "\n";
    }
    return 0;
}