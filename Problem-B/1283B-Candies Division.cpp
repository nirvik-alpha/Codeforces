

#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                scanf("%lld",&num)
#define   sll(num1,num2)         scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)               for(i=1;i<=n;i++)
#define   rep0(i,n)              for(i=0;i<n;i++)
#define   reps(i,a,n)            for(i=a;i<=n;i++)

#define   pb                     push_back
#define   pf                     printf

typedef long long ll;
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    ll n,m,x,y,sum;
    cin>>n>>m;

    sum = n-(n%m);

    sum = sum + min(n%m ,m/2);

    cout<<sum<<endl;

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

    return 0;
}
