#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef long  double lb;
#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;

const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

long long  mod = 1000000000+7;

ll n,a[105];

ll Calculate(ll value)
{
    ll res = 0;
    for(int i=1; i<n; i++)
    {
        if(a[i]+value-1<a[i+1])
            res += value;
        else
            res += (a[i+1]-a[i]);
    }
    res += value;
    return res;
}



void solve()
{
     ll n;
     cin>>n;


   if(n==1)
   cout<<"1"<<endl;
   else
   {
   for(int i=2;i<=n+1;i++)
        cout<<i<<" ";

        cout<<endl;
   }
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

