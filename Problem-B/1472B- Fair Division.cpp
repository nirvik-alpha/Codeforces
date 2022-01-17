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
    ll n,a[1000],one=0,two;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(a[i]);

    }

    int on = count(v.begin() , v.end() , 1);
     int tw = count(v.begin() , v.end() , 2);

    if(on%2!=0)
        cout<<"NO"<<endl;
    else if(on==0 && (tw%2!=0))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;


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


