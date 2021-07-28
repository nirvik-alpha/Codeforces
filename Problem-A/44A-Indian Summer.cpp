

#include<bits/stdc++.h>
using namespace std;

#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef  long long ll;
int main()
{
    FAST;

    ll n;
    cin>>n;
    vector<pair<string,string> >v(n);

   for(ll i=0;i<n;i++)
   {
       cin>>v[i].first>>v[i].second;
   }

   sort(v.begin(),v.end());

    ll s = unique( v.begin() , v.end() ) - v.begin();

    cout<<s<<endl;
}
