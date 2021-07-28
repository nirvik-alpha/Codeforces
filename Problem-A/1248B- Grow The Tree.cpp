
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
   ll n,x,z,s1=0,s2=0;
   cin>>n;
   loop(n)
   cin>>a[i];
    sort(a,a+n);

   z=n/2;

  x= n-z;

  for(i=0;i<z;i++)
  s1=s1+a[i];

  for(i=z;i<n;i++)
    s2=s2+a[i];

   cout<<(s1*s1) +(s2*s2)<<endl;



}
