
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

 	ll n,q,i;
 	cin>>n>>q;
 	string a[n];
 	for(i=0;i<n;i++) cin>>a[i];

 	ll x[q],ans=0;

 	for(i=0;i<q;i++) cin>>x[i];

 	for(i=0;i<q;i++){
 		ll c=0;
 		ll p[5]={0};

 		for(ll j=0;j<n;j++){
 			p[a[j][i]-'A']++;
 			c=max(c,p[a[j][i]-'A']);
 		}
 		ans+=(c*x[i]);
 	}
 	cout<<ans<<endl;
}
