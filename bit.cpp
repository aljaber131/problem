/*
https://codeforces.com/problemset/problem/282/A
*/
#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,x=0;
    string j;
    string k="X++";
    string l="++X";
    string m="--X";
    string o="X--";

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        if(j==k || j==l)
        {
            x=x+1;
        }
        else if(j==m || j==o)
        {

            x=x-1;
        }
    }
    cout<<x;
}
