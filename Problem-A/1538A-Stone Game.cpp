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

long long getSum(long long n)
{
    return (n*(n+1))/2;
}


void solve()
{
    vector<int>v;
    ll n,a[10000],c1=1,c2=1;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }

     int  p= *max_element(v.begin(),v.end()) ;
     int  q= *min_element(v.begin(),v.end()) ;

      int  pi= max_element(v.begin(),v.end()) -v.begin();
     int  qi= min_element(v.begin(),v.end()) -v.begin();

    for(int i=0;i<n;i++)
        {
            if(v[i]!=p)
                c1++;
                else
                    break;
          //  if(a[i]!=q)
            //    c2++;
        }
    for(int i=0;i<n;i++)
        {
            if(v[i]!=q)
                c2++;
                else
                    break;

        }

        ll total1 =c1+(n-c2+1);
        ll total2 = c2 +(n-c1+1);

    ll    x = max(pi+1,qi+1);
     ll    y = min(pi+1,qi+1);
     ll    z = min(x,n-y+1);
    ll    z1=min(total2,z);
        ll    z2 = min(total1,z1) ;
        cout<<z2<<endl;

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

