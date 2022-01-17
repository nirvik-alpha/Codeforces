
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



void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;

    ll x = abs(a-b);
    ll tot = 2*x;
    if(tot<c)
        cout<<"-1"<<endl;
    else if(x==1)
        cout<<"-1"<<endl;
    else
    {
       ll y = x+c;

       if(tot>=max(a,b))
       {
        if(y>(tot))
        {
            if(c>x)
                cout<<c-x<<endl;
            else
                cout<<x-c<<endl;
        }
        else
            cout<<y<<endl;
       }
       else
        cout<<"-1"<<endl;


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

