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
    ll n;
    cin>>n;

    ll a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    ll f=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i+1]<=a[i])
        {
            f=1;
        }
    }


    if((n%2==0 )|| (f==1))
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


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

