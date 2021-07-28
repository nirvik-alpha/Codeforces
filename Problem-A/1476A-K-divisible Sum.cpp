

#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                scanf("%lld",&num)
#define   sll(num1,num2)         scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)               for(i=1;i<=n;i++)
#define   rep0(i,n)              for(i=0;i<n;i++)
#define   reps(i,a,n)            for(i=a;i<=n;i++)

#define   pb                     push_back
#define   pf                     printf
#define tab                      "\t"

typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;
const ll Inf = 1LL << 62;



void solve()
{
  ll n,k,z,x;
  cin>>n>>k;

  if(n==1)
      cout<<k<<endl;
else if(k==1)
  cout<<1<<endl;
 else if(n==k)
    cout<<1<<endl;
  else if(n>k)
  {
    z = n%k;
    x = n/k;

    if(z==0)
      cout<<1<<endl;
    else
    cout<<2<<endl;

  }
  else if(n<=k)
  {
    z = k%n;
    x = k/n;
    if(z==0)
      cout<<x<<endl;
    else
      cout<<x+1<<endl;
    /*
    else
    {
      cout<<z<<endl;
    }
    */
  }

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
    return 0;
}
