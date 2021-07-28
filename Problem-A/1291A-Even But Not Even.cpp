
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
  ll n,i;
  cin>>n;
  string s;
  cin>>s;

  string ans="";

  for(i=0;i<n;i++)
  {
      int digit=s[i]-'0';

      if(digit%2==1)
      {
          ans=ans+s[i];
      }
      if(ans.size()==2)
        break;

  }
  if(ans.size()==2)
    cout<<ans<<endl;
  else
    cout<<"-1"<<endl;



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
