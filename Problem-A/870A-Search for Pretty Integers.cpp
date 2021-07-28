
#include<bits/stdc++.h>
#define    loop(a)           for( int i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

vector<int>v1,v2;
set<int>s;

int main()
{
   ll n,m,t,i;
   cin>>n>>m;
    ll a[n],b[m];

   for(i=0;i<n;i++)
   cin>>a[i];

   for(i=0;i<m;i++)
   cin>>b[i];

   sort(a,a+n);
   sort(b,b+m);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i];
                return 0;
            }
        }

    }
   cout<<min(a[0],b[0])<<max(a[0],b[0]);
}
