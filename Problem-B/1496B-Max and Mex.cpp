#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                  scanf("%lld",&num)
#define   sll(num1,num2)    scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)               for(i=1;i<=n;i++)
#define   rep0(i,n)             for(i=0;i<n;i++)
#define   reps(i,a,n)          for(i=a;i<=n;i++)

#define   pb                     push_back
#define   pf                     printf
#define tab                      "\t"
#define Infinity  1e9
typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;
const ll Inf = 1LL << 62;
const int N=2e5+5;

long long getSum(long long n)
{
    return (n*(n+1))/2;
}


void solve()
{
    vector<ll >v,v1;
    ll n,k,x,ax,z,mx=0,mex=0,ok=0;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx = max(a[i],mx);
    }

    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(mex!=a[i])
            break;

            mex++;

    }

   if(mex>mx)
    {
        cout<<n+k<<endl;
        //continue;
    }
    else
    {
   ll s = (mex+mx)/2 +(mex+mx)%2;

     for(int i=0;i<n;i++)
     {

         if(a[i]==s)
         {
             ok=1;
         break;
         }

     }

     if(!ok&&k)
        cout<<n+1<<endl;
    else
        cout<<n<<endl;

    }
}
int main()
{
    FAST;
    long long t,a;
    cin>>t;
    // a = 2*t;
    while(t--)
    {
        solve();
    }
    return 0;
}

