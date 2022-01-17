
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
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll digitsum=0;

    ll last = s[n-1]-'0';

    for(int i=0;i<n-1;i++)
    {
        if(s[i]!='0')
        {
            digitsum = digitsum+(s[i]-'0');
            digitsum++;
        }
    }
  cout<<digitsum+last<<endl;




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
