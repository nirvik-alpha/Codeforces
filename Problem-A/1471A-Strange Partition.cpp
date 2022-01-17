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


void solve()
{
    ll n, x ,sum=0 ,sum1=0;
    cin>>n>>x;

    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum = sum+a[i];
        sum1 = sum1+(a[i]/x) + (a[i]%x!=0);
    }

   sum = (sum/x) + (sum%x!=0);
   if(sum>sum1)
    swap(sum ,sum1);

   cout<<sum<<" "<<sum1<<endl;






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


