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
    ll n,x;
    cin>>n>>x;

    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[i]=1;

    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%x==0)
        {
           a[n] = a[i]/x;
           cnt[n] = cnt[i]*x;
           n++;
        }
        else
         {
             break;
         }
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum+(a[i]*cnt[i]);
    }


    cout<<sum<<endl;


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

/*
5
7  6  10
3  8  9
5  3  2
11  15  12
13  14  1

*/


