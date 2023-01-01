///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
#define     INF                             (ll)1e9
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7,siz = 1e6+5;
bool have[siz];


void solve()
{
    ll n,m,s1 ,s2 , d;
    cin>>n>>m>>s1>>s2>>d;

   ll x = min(s1-1,m-s2);
   ll y = min(n-s1,s2-1);
   if(x<=d && y<=d)
        cout<<"-1"<<endl;
   else
    cout<<(n-1)+(m-1)<<endl;


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


/*
1
6
2 9 14 15 17 21




*/

