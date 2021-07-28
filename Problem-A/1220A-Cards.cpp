#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,one =0,zero=0;
     string s;

     cin>>n>>s;
     for(int i=0;i< n;i++)
     {
         if(s[i]=='z')
            zero++;
         else if(s[i]=='n')
            one++;
     }
    while(one--)
        cout<<1<<" ";
    while(zero--)
        cout<<0<<" ";

}
