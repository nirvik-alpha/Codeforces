

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
    ll  a[1000],n,i,j;
    cin>>n;
    for(ll i=0;i<2*n;i++)
    {
        cin>>a[i];
    }

    for( i=0;i<(2*n);i++)
    {
        for( j=0;j<i;j++)
            {
                if(a[i]==a[j])
                    break;
            }
            if(i==j)
                cout<<a[i]<<" ";

    }
    cout<<endl;
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



