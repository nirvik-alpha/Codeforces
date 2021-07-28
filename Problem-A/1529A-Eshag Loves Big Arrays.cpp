
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


struct dta
{
    int i ,j,x, y;
};

map<int,int>mp;


void solve()
{
    vector<int>v;
   ll n,a[1000],x;
   cin>>n;

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       v.push_back(a[i]);
   }

   sort(a,a+n);

   x = count(v.begin() , v.end() , a[0]);

   cout<<n-x<<endl;


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
