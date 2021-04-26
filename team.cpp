#include<bits/stdc++.h>
using namespace std;
main(){
    int n,i,t,b,a,s=0;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>t >> b >> a;
    if(t+b+a >=2)
    {
        s++;
    }
    }
    cout<<s;

}
