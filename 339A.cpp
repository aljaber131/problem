/*
https://codeforces.com/problemset/problem/339/A
*/
#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int i,j;
    char temp;
    for(i=0;i<s.length();i++){
            if(s[i]=='+')
            {
                continue;
            }
        for(j=i+1;j<s.length();j++)
        {
            if(s[j]=='+')
            {
                continue;
            }
            if(s[i]>s[j]){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            }
        }
    }
    cout<<s;
}
