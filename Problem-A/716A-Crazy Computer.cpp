
#include<bits/stdc++.h>
#define    loop(a)           for( i=0;i<a;i++)
using namespace std;

const int N=2e5+5;

long long  a[N];

vector<int>v1,v2;
set<int>s;

long long  fib[1000],i;
int main()
{
    long long n,m,x,c=0;
    cin>>n>>m;

    loop(n)
    cin>>a[i];

    loop(n)
    {
        x = a[i+1]-a[i];
        if(x<=m)
            c++;
        else
            c=0;
    }
    cout<<c<<endl;
}
