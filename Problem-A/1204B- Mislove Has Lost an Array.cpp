
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
    ll n,l,r;
    cin>>n>>l>>r;

    ll max_c=0,min_c=0,i=0,max_s=0,min_s=0;

    while(min_c<l)
    {
        min_s= min_s+pow(2,i);
        i++;
        min_c++;
    }
    min_s=min_s+(n-l);
        i=0;
    while(max_c<r)
    {
        max_s=max_s+pow(2,i);
        max_c++;
        i++;
    }
   ll larg=pow(2,r-1);
    max_s =max_s+(n-r)*larg;

    cout<<min_s<<" "<<max_s;
}
