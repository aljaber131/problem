/*
https://codeforces.com/problemset/problem/263/A
*/
#include<bits/stdc++.h>
using namespace std;
main(){

        int i,j,x,y,op,val;
        for( i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>val;
                if(val==1)
                {
                    op=abs(2-i)+abs(2-j);
                }

            }
        }
        cout<<op;


}
