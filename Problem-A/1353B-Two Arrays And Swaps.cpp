

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
    ll n,k,i,j,a[1000],b[1000],sum=0;
    cin>>n>>k;

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll j=0;j<n;j++)
    {
        cin>>b[j];
    }
    sort(a,a+n);

    sort(b,b+n,greater<int>());

    for(i=0;i<k;i++)
    {
        if(a[i]<b[i])
            swap(a[i] , b[i]);
    }
    for(ll i=0;i<n;i++)
    {
        sum = sum+a[i];
        //cout<<a[i]<<" ";
    }
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



