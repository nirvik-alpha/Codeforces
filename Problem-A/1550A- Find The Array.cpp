#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

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
    ll x,sum=1,c=0,k=0;
    cin>>x;

    if(x==1)
        cout<<"1"<<endl;
    else if(x==0)
        cout<<"0"<<endl;

    else
    {
    for(ll i=1; ;i=i+2)
    {
        sum =sum+i;

        if(sum>x)
        {
                k=1;
            break;
        }
        c++;
    }

 // if(sum==x)
   //     cout<<c<<endl;
   // else
    cout<<c+1<<endl;
    }

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

