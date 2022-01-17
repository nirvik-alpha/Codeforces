#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
#define MXE  1e5

typedef long long int ll;
typedef long  double lb;
#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;


const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

long long  mod = 1000000000+7;
#define INF INT_MAX
ll a[Max],cnt[Max];


int first(int n)
{
    while(n>=10)
        n/=10;

    return n;
}
int last(int n)
{

    return (n%10);
}

string s;

ll ok(string s)
{
    ll c=0;
    ll si=s.size();
    for(ll i=0; i<si-2; i++)
    {
        if(s.substr(i,3)=="abc")
        {
            c++;
        }
    }
    return c;
}
void solve()
{
    int n,m,i,j,k;
    int x1,p1,x2,p2;

    cin>>x1>>p1;
    cin>>x2>>p2;
    int N=1000000;

    while(x1<N)
    {
        x1*=10;
         p1--;
    }

    while(x2<N)
    {
        x2*=10;
         p2--;
    }

    if(x1==x2 && p1==p2)
        cout<<'='<<endl;
    else if(p1<p2)
        cout<<'<'<<endl;
    else if(p2<p1)
        cout<<'>'<<endl;
    else if(x1<x2)
        cout<<'<'<<endl;
    else
        cout<<'>'<<endl;
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

