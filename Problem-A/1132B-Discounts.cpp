
#include<bits/stdc++.h>
#define    loop(a)           for( i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

//long long  a[N],b[N];

vector<int>v1,v2;
set<int>s;

long long  fib[1000],i;
int main()
{
    ll n,sum=0,m,x;
    cin>>n;

    ll a[n];
    loop(n)
    {
        cin>>a[i];
        sum =sum+a[i];
    }
     sort(a,a+n);

    cin>>m;

    loop(m)
    {cin>>x;
    cout<<sum-a[n-x]<<endl;

    }


}
