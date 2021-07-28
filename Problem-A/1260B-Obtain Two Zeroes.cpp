
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MAX 1000005
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;

vector<int>v;


void solve()
{
  ll a,b;
  cin>>a>>b;

  if(a>b)
    swap(a,b);
  if((a+b)%3==0 && (2*a)>=b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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

}
