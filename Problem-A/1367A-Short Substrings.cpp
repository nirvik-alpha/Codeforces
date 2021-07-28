

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
    string s;
    cin>>s;
    cout<<s[0]<<s[1];

    for(ll i=3;i<s.length();i=i+2)
    {
        cout<<s[i];
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



