#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


const int mx = 30;
vector<int>adj[mx];
bool vis[mx];

ll x[300001];
long long  getSum(ll n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

void solve()
{
    ll n,x;

    set<ll>s;

    cin>>n;
    ll a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[i+1])
        {
            a[i+1]++;
        }

         s.insert(a[i]);
    }

    cout<<s.size()<<" ";
    cout<<endl;


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


