

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

  ll n= s.length();
  ll last = n-1;
  for(int i =n-1;i>=0;i--)
  {
      if(s[i]=='0')
        last = i;
  }
  ll c=0;
  for(int i=last ;i >=0;i--)
  {
      c++;
      if(s[i]=='1')
        break;
  }
  cout<<c<<endl;



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


/*
1
6
2 9 14 15 17 21
fsdfdsfdsdfds



*/

