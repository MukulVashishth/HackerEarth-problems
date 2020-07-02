#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    vector<long long> left(n,0);
    vector<long long> right(n,0);

    stack<long long>stk;
    stack<long long>stk1;
    for(int i=0;i<n;i++)
    {
        while(!stk.empty() && arr[stk.top()]<=arr[i])
            stk.pop();
        if(!stk.empty())
            left[i] = stk.top()+1;
        else
            left[i] = -1;
        stk.push(i);
    }

    for(int i=n-1;i>=0;i--)
    {
        while(!stk1.empty() && arr[stk1.top()]<=arr[i])
            stk1.pop();
        if(!stk1.empty())
            right[i] = stk1.top()+1;
        else
            right[i] = -1;
        stk1.push(i);
    }

    for(int i=0;i<n;i++)
        cout << left[i]+right[i] << " ";
}