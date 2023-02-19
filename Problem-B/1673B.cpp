
///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
#define     INF                             (ll)1e9
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7,siz = 1e6+5;
bool have[siz];

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second > b.second;
}

/////////////////////////




void solve()
{
  string s;
  cin>>s;
  set<int>x;
  for(int i=0;i<s.length();i++)
  {
     x.insert(s[i]);
  }
  ll k=0;
    for(int i=1;i<s.length();i++)
    {
        if(i<x.size())
        {
            if(s[i]==s[i-1])
            {
                k=1;
                break;
            }
        }
        else{
            if(s[i]!=s[i-x.size()])
                {
                    k=1;
                    break;
                }
            }
    }

    if(k==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;


}






int main()
{

    FAST;

    ll t;

    cin>>t;
    while(t--)
    {
        solve();
    }

}




