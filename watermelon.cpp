#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
     int w;
     cin>>w;
     if(w>0)
     {
         if(w%2==0)
         {
             if(w>2)
             cout<<"YES";
             else
             cout<<"No";
         }
         else
         cout<<"No";
     }
     else
     cout<<"No";
     return 0;
 }

