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
    ll n, a ,b;
    cin>>n>>a>>b;

    vector<long long>v1,v2;

    v2.push_back(b);

    for(int i =1; v2.size()!=n/2 && i<=n;i++)
    {
        if(i!=a && i!=b)
            v2.push_back(i);
    }
    sort(v2.begin(),v2.end());

    for(int i=1;i<=n;i++)
    {
        if(find(v2.begin(),v2.end(),i)==v2.end())
            v1.push_back(i);

    }

    if(*min_element(v1.begin(),v1.end()) == a && *max_element(v2.begin(),v2.end())==b)
    {
        for(auto &u: v1)
            cout<<u<<" ";
        for(auto &u: v2)
            cout<<u<<" ";

            cout<<endl;
    }
    else
        cout<<"-1"<<endl;


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

