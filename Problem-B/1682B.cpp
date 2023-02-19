

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
    ll n;
    cin>>n;


    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i)
            v.push_back(a[i]);
    }
    ll sum = v[0];
    ll mx =0;
    for(int i=1;i<v.size();i++)
    {
        sum &= v[i];

    }
    cout<<sum<<endl;



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



