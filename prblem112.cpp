/*
https://codeforces.com/problemset/problem/112/A
*/
#include<bits/stdc++.h>
using namespace std;
main()
{
    string m;
    string n;
    cin>>m;
    cin>>n;
    for(int i=0;i<m.length();i++)
    {
        if(m[i]>='A' && m[i]<='Z')
        {
            m[i]=m[i]+('a'-'A');
        }
    }
    for(int i=0;i<n.length();i++)
    {
        if(n[i]>='A' && n[i]<='Z')
        {
            n[i]=n[i]+('a'-'A');
        }
    }

    if(m==n)
    {
        cout<<0;
    }
    else if(m>n)
    {
        cout<<1;
    }
    else if(m<n)
    {
        cout<<-1;
    }

}
