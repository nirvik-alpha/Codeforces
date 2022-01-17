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

 ll n,x;
 cin>>n;

 ll ar[n],mx=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>ar[i];
    }

    vector<ll>v,v1;
    set<ll>s;

    for(ll i=1;i<=n;i++)
    {
        if(ar[i]>i)
        {
        x = ar[i]-i;
        mx = max(x,mx);
        }

    }

    cout<<mx<<endl;



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

