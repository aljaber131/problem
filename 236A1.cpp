
#include<bits/stdc++.h>
using namespace std;
main(){
    int i,j,count=0,val;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
            count++;
    }
    cout<<s<<endl;
    cout<<count;
}
