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

    //ll a[n];

   lb sum=0;
    cin>>n;

    ll a[n];

    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for( int i=0;i<n-1;i++)
    {
        sum =sum+a[i];
    }
    lb z = sum/(n-1);
    lb y = a[n-1];
    lb x = (y+z) ;
    cout<<fixed<<setprecision(9)<<(x)<<endl;


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


