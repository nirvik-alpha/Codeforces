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
void solve()
{
     ll n;
     cin>>n;

     for(int i=0;i<n;i++)
     {
         cin>>a[i];

     }



     ll c=0;
    for(int i=0;i<n;i++)
    {
       while(a[i]%2==0)
       {
           a[i]=a[i]/2;
           c++;
       }
    }
      sort(a,a+n);
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum = sum+a[i];

    }

    cout<<sum + (a[n-1]*(1LL<<c))<<" ";
cout<<endl;


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

