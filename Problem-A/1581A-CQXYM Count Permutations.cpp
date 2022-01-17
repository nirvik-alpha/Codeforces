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
   ll n;
   cin>>n;

   vector<int>v(n);

   ll x =1;
   for(int i=3;i<=(2*n);i++)
   {
       x =x*i;
       x= x%mod;
   }

   cout<<x<<endl;

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

