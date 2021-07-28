
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                               scanf("%lld",&num)
#define   sll(num1,num2)                scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)                               for(i=1;i<=n;i++)
#define   rep0(i,n)                              for(i=0;i<n;i++)
#define   reps(i,a,n)                           for(i=a;i<=n;i++)

#define   pb                                         push_back

typedef long long ll;

#include<bits/stdc++.h>
using namespace std;

vector<long long>v;

bool  aresame(ll a[],ll n)
{
    ll first = a[0];

    for(ll i=1; i<n; i++)
    {
        if(a[i]!=first)
            return 0;
    }
    return 1;

}

void solve()
{

    v.clear();

    ll n,x,f=LLONG_MAX,sum;
    f=0;
    cin>> n;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sum=0;
    for(ll i=0; i<n-1; i++)
    {
        sum=sum+v[i];
        if(sum<=0)
        {
            f=1;
            break;
        }
    }
    sum=0;
    for(ll i=n-1; i>0; i--)
    {
        sum=sum+v[i];
        if(sum<=0)
        {
            f=1;
            break;
        }
    }
    if(f)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
int main()
{
    FAST;
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
