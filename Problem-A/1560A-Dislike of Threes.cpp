
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
    ll k;
    cin>>k;

    vector<ll>v;

    int c=1;
    for(int i=1; i<=10000; i++)
    {

            if((i%3==0) || (i%10==3))
            {
                continue;
            }
            else
                v.push_back(i);


    }
    cout<<v[k-1]<<endl;

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

