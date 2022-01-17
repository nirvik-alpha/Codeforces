#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef long  double lb;

#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;

const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

long long  mod = 1000000000+7;


bool isSubSequence(string t, string s, int m, int n)
{
    int j = 0;

    for (int i = 0; i < n && j < m; i++)
        if (t[j] == s[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    if(i.first<j.first)
        return i.first<j.first;
    if(i.second<j.second)
        return (i.second<j.second);

}
bool com(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first < j.first;

}

void solve()
{
      ll n,q;

    cin>>n>>q;

    ll a[n+1];

    string s;
    cin>>s;

    a[0]=0;

    ll sum =0;
    for(ll i=1;i<=n;i++)
    {
        sum = sum+s[i-1]-96;
    a[i]= sum;
       // a[i]=a[i-1]+(ll)(s[i-1]-'a'+1);
    }

    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<endl;
    }

}
int main()
{
    FAST;
    long long int t,a;

  //  cin>>t;
  //  while(t--)
  //  {
        solve();
 //   }
    return 0;
}

