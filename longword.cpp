#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    string str;
    cin>>str;
    int k=str.length();
    if(k>=10){
    cout<<str[0]<<(str.length()-2)<<str[k-1];
    }
    else
    cout<<str;
    }
}