
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


void solve()
{
    ll a,b,x,y,n;
    ll ta,tb,tx,ty,tn;

    cin>>a>>b>>x>>y>>n;

     ta=a;tb=b;tx=x;ty=y;tn=n;

    ll z =min(a-x,n);

    n=n-z;
    a=a-z;
    z = min(b-y,n);
    b=b-z;
    ll p = a*b;

    a=ta;b=tb;x=tx;y=ty;n=tn;

    z=min(b-y,n);

        n=n-z;
        b=b-z;
        z=min(a-x,n);
        a=a-z;

  p=min(a*b,p);
    cout<<p<<"\n";

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
