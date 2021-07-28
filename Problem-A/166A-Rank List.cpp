

#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long ll;

bool cmp(const pair<int,int> &p1, const pair<int,int>&p2)
{
    if(p1.first>p2.first)
        return 1;
    else if(p1.first==p2.first)
        return (p1.second<p2.second);
    return 0;
}

int main()
{
    FAST;

    ll n,k,c=0;
    cin>>n>>k;

    vector<pair<int,int>>v(n);

    for(ll i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);

    for(auto u  : v)
    {
        if(u==v[k-1])
            c++;
    }
    cout<<c<<endl;

}
