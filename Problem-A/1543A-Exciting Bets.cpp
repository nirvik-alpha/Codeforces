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

    ll a,b;
    cin>>a>>b;

    ll dif = abs(a-b);
    ll mn = min(a,b);

  if(dif==1)
        cout<<dif<<" "<<"0"<<endl;
    else if(a==b)
    cout<<"0"<<" "<<"0"<<endl;
    else
  {
      ll x = a%dif;
      cout<<dif<<" "<<min(x, dif-x)<<endl;

  }



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

/*
5
7  6  10
3  8  9
5  3  2
11  15  12
13  14  1

*/


