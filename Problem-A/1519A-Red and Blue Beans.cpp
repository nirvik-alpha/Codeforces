
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                scanf("%lld",&num)
#define   sll(num1,num2)         scanf("%lld %lld",&num1,&num2)
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


void solve()
{
  ll r,b,d,x;

  cin>>r>>b>>d;


  if(r>=1 && b>=1)
  {
        double x = abs(r-b);
      double y = x/min(r,b);
      if(y>d)
        cout<<"NO"<<endl;
      else
        cout<<"YES"<<endl;

    //cout<<y<<endl;

  }
  else
    cout<<"NO"<<endl;





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