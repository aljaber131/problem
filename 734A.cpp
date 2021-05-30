/*
https://codeforces.com/problemset/problem/734/A
*/
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,count=0,count1=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
            count++;
        else
            count1++;
    }
    if(count>count1)
        cout<<"Anton";
    else if(count==count1)
        cout<<"Friendship";
    else
        cout<<"Danik";
}
