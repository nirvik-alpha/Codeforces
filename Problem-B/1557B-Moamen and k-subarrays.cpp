#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
   ll n,k;
   cin>>n>>k;

   ll a[n];
   map<ll ,ll> mp;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
       mp[a[i]]=i;
   }

   ll c=1;
   sort(a+1,a+n+1);
   for(int i=1;i<n;i++)
   {
       if(mp[a[i+1]] - mp[a[i]] ==1)
        continue;
       else
        c++;

   }

   if(c>k)
    cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;




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


