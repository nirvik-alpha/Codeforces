
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
    ll n,even;
    cin>>n;

    ll a[n],j;

    even =0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
        {
            even=1;
            j=i;
        }
    }
    if(even)
        cout<<1<<endl<<j<<endl;
    else if(n>1)
        cout<<2<<endl<<1<<" "<<2<<endl;
    else
        cout<<-1<<endl;

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
