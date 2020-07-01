#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        // long count=0;
        // string a,b;
        // cin >> a >> b;
        // map<char,int> mpk;
        // for(int i=0;i<a.size();i++)
        //     mpk[a[i]]++;
        // for(int i=0;i<b.size();i++)
        //     mpk[b[i]]++;            

        // for(auto it=mpk.begin();it!=mpk.end();it++)
        // {
        //     if(it->second!=2)
        //         count++;
        // }
        // cout << count << endl;
        string a,b;
        cin >> a >> b;
        int count1[26] = {0} , count2[26] = {0};

        for(int i=0;a[i]!='\0';i++)
            count1[a[i]-'a']++;
        for(int i=0;b[i]!='\0';i++)
            count2[b[i]-'a']++;
        
        int result=0;
        for(int i=0;i<26;i++)
            result+=abs(count1[i] - count2[i]);
        
        cout << result << endl;
    }
}