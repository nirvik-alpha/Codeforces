#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef long  double lb;
#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;

const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

long long  mod = 1000000000+7;

ll n,a[105];

ll Calculate(ll value)
{
    ll res = 0;
    for(int i=1; i<n; i++)
    {
        if(a[i]+value-1<a[i+1])
            res += value;
        else
            res += (a[i+1]-a[i]);
    }
    res += value;
    return res;
}



void solve()
{
   ll n;
   cin>>n;

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   ll  x =1;

   if(a[0]==1)
    x++;



   for(int i=1;i<n;i++)
   {
       if(a[i]==0 && a[i-1]==0)
       {
           x=-1;
           break;
       }

       if(a[i]==1)
       {
           if(a[i-1]==1)
            x+=5;
           else
            x+=1;
       }
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

