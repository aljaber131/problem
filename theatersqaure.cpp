#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,a,res;
    cin>>m>>n>>a;
    res= m%a==0 ? m/a : m/a +1;
    res =res* (n%a == 0 ? n/a : n/a +1);
    cout<<res;
    return 0;
}

