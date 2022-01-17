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
  ll a,b ;
  cin>>a>>b;


    ll xi = x[a-1];

     ll y=b^xi;

    if(xi==b)
    {
        cout<<a<<endl;

    }
   else if(y==a)
        cout<<a+2<<endl;
    else
        cout<<a+1<<endl;

}

int main()
{
    FAST;
    long long int t,a;

    for(int i=0;i<=300000;i++)
    {
        x[i] = x[i-1]^i;
    }

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


