#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
   ll n,k=0,c=0;
   cin>>n;

   string s1,s2;

   cin>>s1>>s2;


   for(int i=0;i<n;i++)
   {
       if(s2[i]=='1')
       {
           if(s1[i]=='0')
           c++;
           else if(s1[i-1]=='1')
           {
               s1[i-1]='0';
               c++;
           }
           else if(s1[i+1]=='1')
           {
               s1[i+1]='0';
               c++;
           }
       }
   }

   cout<<c<<endl;


}

int main()
{
    FAST;
    long long int t,a;
    cin>>t;
    // a = 2*t;
    while(t--)
    {
        solve();
   }
    return 0;
}


