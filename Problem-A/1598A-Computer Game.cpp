#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
#define MXE  1e5
typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll a[Max],cnt[Max];

void solve()
{
   ll n;
   cin>>n;

   string s1,s2;
   cin>>s1>>s2;

   ll k=0;

   for(int i=0;i<n;i++)
   {
       if((s1[i]=='1')&&(s2[i]=='1'))
       {
           k=1;
           break;
       }
   }

   if(k==1)
    cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;


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

