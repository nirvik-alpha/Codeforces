

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

ll getSum(ll n)
    {
        ll sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
void solve()
{
    ll  n;
    cin>>n;

    ll x = getSum(n);
    ll j = __gcd(n,x);

    ll y = getSum(n+1);
    ll k = __gcd(n+1,y);

    ll  z= getSum(n+2);
    ll l= __gcd(n+2,z);

     if(j!=1)
    {
        cout<<n<<endl;
    }
    else if(k!=1)
    {
        cout<<n+1<<endl;
    }
    else if(l!=1)
    {
        cout<<n+2<<endl;
    }
}

/*
3
11
31
75

*/

int main()
{
    FAST;
    long long int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
