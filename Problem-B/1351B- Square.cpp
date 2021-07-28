
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define    loop(a)           for( int i=0;i<(a);i++)
//#define MAX 1000005
const int MAX = 3;
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;


vector<int>v;

void solve()
{
  ll a1,b1,a2,b2,x,y,x1,y1,z;
  cin>>a1>>b1>>a2>>b2;

  x=min(a1,b1);
  y =min(a2,b2);
  x1=max(a1,b1);
  y1=max(a2,b2);
  z=x+y;
  if(x1==y1)
  {
      if(z==x1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
  }
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
    return 0;
}
