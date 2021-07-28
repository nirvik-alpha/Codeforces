
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                  scanf("%lld",&num)
#define   sll(num1,num2)    scanf("%lld %lld",&num1,&num2)
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

void solve()
{
    vector<int>v,v1,v3;

    ll n,a[10000];
    cin>>n;

    for(int i=0;i<(2*n);i++)
    {
        cin>>a[i];
    }
    sort(a,a+(2*n));

    ll l=0 ,r =(2*n)-1;
    //r--;
    while(l<=r)
    {
        v.push_back(a[r]);
        //r--;
        if(l==r)
            break;
        r--;
        v.push_back(a[l]);
        l++;
    }
    for(int i=0;i<(2*n);i++)
        cout<<v[i]<<" ";

        cout<<endl;
}

int main()
{
    FAST;
    long long t,a;
    cin>>t;
    // a = 2*t;
     while(t--)
    {
    solve();
    }
    return 0;
}
