
///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
#define     INF                             (ll)1e9
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7,siz = 1e6+5;
bool have[siz];

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second > b.second;
}

/////////////////////////

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    map<ll ,ll >suru , sesh ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(suru.count(a[i])==0)
        {
            suru[a[i]] = i;
        }
        sesh[a[i]] = i;
    }

    while(k--)
    {
        ll x,y;
        cin>>x>>y;

        if(suru.count(x)==0 || suru.count(y)==0 || suru[x] > sesh[y])
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;


    }



}






int main()
{

    FAST;

    ll t;

    cin>>t;
    while(t--)
    {
        solve();
    }

}



