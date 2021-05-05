/*
https://codeforces.com/problemset/problem/266/A
*/
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,count=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            continue;
        }
    }
    cout<<count;
}
