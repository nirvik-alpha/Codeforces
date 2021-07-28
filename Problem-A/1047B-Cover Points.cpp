
#include<bits/stdc++.h>
#define    loop(a)           for( i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

long long  a[N];

vector<int>v1,v2;
set<int>s;

long long  fib[1000],i;
int main()
{
    ll n,x,y,a=0,z=0,sum1=0,sum;
    cin>>n;

    while(n--)
    {
        cin>>x>>y;

      sum=x+y;
      if(sum1<sum)
      sum1=sum;

    }
    cout<<sum1<<endl;
}
