

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


int main()
{
    FAST;
    ll t,n,c,i,a[2009],x=0,j;
        cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>odd,even;

        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];

            if(a[i]%2==0)
                even.pb(i+1);
            else
                odd.pb(i+1);
        }
        vector< pair<ll , ll> > v;
        for(int i=1;i<even.size();i+=2)
        {
            v.pb({even[i],even[i-1]});
        }

        for(int i=1;i<odd.size();i+=2)
        {
            v.pb({odd[i],odd[i-1]});
        }

        x=v.size();

        for(int i=0;i<min(x,n-1);i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

    }

    return 0;
}
