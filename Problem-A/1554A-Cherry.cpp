
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
  ll n;
  cin>>n;

  ll a[n];
  set<int>s;
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
        s.insert(a[i]);
  }
ll ans =0;
  for(int i=1;i<n;i++)
  {
      ans = max(ans , a[i] *a[i+1]);
  }

  cout<<ans<<endl;

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

