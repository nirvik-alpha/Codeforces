
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MAX 1000005
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;

vector<int>v;


void solve()
{
  ll n;
  cin>>n;

  ll x= (n+3)/4;
  for(int i=0;i<n-x;i++)
  {
      cout<<"9";
  }
    for(int i=0;i<x;i++)
  {
      cout<<"8";
  }
  cout<<endl;
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
