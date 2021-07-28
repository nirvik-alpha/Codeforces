

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


vector<ll>v;

void solve()
{
    ll n,ara[1000],i;
   cin >> n;

        for(i=1;i<=n;i++)
            cin >> ara[i];
        set<int>st;
        for(i=1;i<=n;i++)
        st.insert(ara[i]);
        if(st.size() == n)
        cout << "NO"<<endl;
        else
        cout << "YES"<<endl;
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
