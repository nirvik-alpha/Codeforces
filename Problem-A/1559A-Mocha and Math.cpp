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

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int ans = a[0];

        for(int i =1;i<n;i++){
            ans&=a[i];
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


