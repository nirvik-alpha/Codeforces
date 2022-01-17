#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
   ll n;
   cin>>n;
   string s ,s1="";
   cin>>s;

   for(int i=0;i<n;i++)
   {
       if(s[i]=='U')
       {
           s1 =s1+'D';
       }
       else if(s[i]=='D')
       {
           s1=s1+'U';
       }
       else
        s1=s1+s[i];
   }
   cout<<s1;
   cout<<endl;

}

int main()
{
    FAST;
    long long int t,a;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

