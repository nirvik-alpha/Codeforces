
#include<bits/stdc++.h>
#define    loop(a)           for( int i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

vector<pair<int,int>>v;
set<int>s;

int main()
{
    ll n,ans=0,x,a[10000],i,j,pos;
    cin>>n;

    for(i=0;i<n;i++)
 {
    cin>>x;
    v.push_back({x,i+1});
 }
    sort(v.rbegin(),v.rend());

    loop(n)
    {
       ans += 1 + v[i].first*i;
    }
    cout<<ans<<endl;

   for(i=0;i<n;i++)
   {
    cout<<v[i].second<<" ";

   }
}
