

#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                scanf("%lld",&num)
#define   sll(num1,num2)         scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)               for(i=1;i<=n;i++)
#define   rep0(i,n)              for(i=0;i<n;i++)
#define   reps(i,a,n)            for(i=a;i<=n;i++)

#define   pb                     push_back
#define   pf                     printf

typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;

void solve()
{
   ll a[3],n;

   cin>>a[0]>>a[1]>>a[2]>>n;

   sort(a,a+3);

  ll  x = (a[2]*2) - a[1] - a[0];
    ll  y = n-x;
    if(y<0 ||y%3!=0)
        cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

}

int main()
{
    FAST;
    ll  t;
    cin>>t;

    while(t--)
    {
      solve();

    }

 return 0;
}
