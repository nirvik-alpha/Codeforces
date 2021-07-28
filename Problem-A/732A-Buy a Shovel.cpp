
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
  ll k,r,x,a,i,c;
  cin>>k>>r;

  for(ll i=1;i<=10;i++)
  {
        x = k*i;

      if((x%10)==0 || (x%10)==r)
        {
            cout<<i;
            exit(0);
            }
   }
}

int main()
{
    FAST;
    long long t;
    //cin>>t;
    //while(t--)
    //{
       solve();
    //}

}
