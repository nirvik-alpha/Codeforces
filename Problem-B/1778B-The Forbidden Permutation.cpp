
///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int  ll;
#define     INF                             (ll)1e9
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7,siz = 1e6+5;
bool have[siz];

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

/////////////////////////
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}


void solve()
{
   ll n,m,d;
   cin>>n>>m>>d;
   ll p[n+1];
   for(int i=0;i<n;i++)
   {
       cin>>p[i];
   }
   ll a[m];
   for(int i=0;i<m;i++)
   {
       cin>>a[i];
   }
   ll pos[n+1];

   for(int i=0;i<n;i++)
   {
       pos[p[i]] = i;
   }

   bool alreadyGood = false;

   for(int i=0;i<m-1;i++)
   {
       if(pos[a[i]] > pos[a[i+1]]  or pos[a[i+1]] > pos[a[i]]+d )
       {
           alreadyGood = true;
           break;
       }
   }

   if(alreadyGood)
    cout<<"0"<<endl;
   else{

    ll ans = INT_MAX ;

    for(int i=0;i<m-1;i++)
    {
        ans = min(ans , pos[a[i+1]]- pos[a[i]]) ;
    }

    if(d+1<n)
    {
    for(int i=0;i<m-1;i++)
    {
        ans = min(ans , d+1- (pos[a[i+1]]- pos[a[i]])) ;
    }
    }
    cout<<ans<<endl;

   }



}



int main()
{

    FAST;

    ll t;

    cin>>t;
    while(t--)
    {
        solve();
    }

}


/*
1
6
2 9 14 15 17 21
fsdfdsfdsdfds



*/




