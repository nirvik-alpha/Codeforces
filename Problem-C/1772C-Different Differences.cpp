
///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
#define     INF                             (ll)1e9
#define Inf                                  1e18
#define me(arr,val)                      memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;


const int mod = 1e9+7,siz = 1e6+5;
bool have[siz];



void solve()
{
    ll n,k;
    cin>>k>>n;
    vector<int>v;
    ll j=1, diff = 1;
    for(int i =1;i<=k;i++)
    {
        cout<<j<<" ";

        if((n-(j+diff))>=(k-i-1))
        {
            j=j+diff;
            diff++;
        }
        else{
            j++;
        }
    }

   cout<<endl;
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

