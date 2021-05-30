
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
 string s;
 string t;
 string a;
 cin>>s;
 cin>>t;
 int k=t.length();
 k--;
 for(int i=0;i<t.length();i++)
 {
     a[i]=t[k];
      k--;
      cout<<k<<endl;;
 }
 cout<<a;
 if(a==s)
 {
 cout<<"YES";
 }
 else
 cout<<"NO";

}
