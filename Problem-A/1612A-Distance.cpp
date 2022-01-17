#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
#define MXE  1e5
typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll a[Max],cnt[Max];

void solve()
{
  ll  x,y,z,m;
  cin>>x>>y;

  if((x+y)%2!=0)
    cout<<"-1"<<" "<<"-1"<<endl;
  else
  {

   z = (x+y)/2;

   m = max(x,y);

   if(x>y)
   {
       cout<<m-z<<" "<<min(x,y)<<endl;
   }
   else
    cout<<min(x,y)<<" "<<m-z<<endl;

  }


}





int main()
{
    FAST;
    long long int t,a;

    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

