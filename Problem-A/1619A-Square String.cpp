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

ll n,a[105];

ll Calculate(ll value)
{
    ll res = 0;
    for(int i=1; i<n; i++)
    {
        if(a[i]+value-1<a[i+1])
            res += value;
        else
            res += (a[i+1]-a[i]);
    }
    res += value;
    return res;
}

bool isSubSequence(string t, string s, int m, int n)
{
    int j = 0;

    for (int i = 0; i < n && j < m; i++)
        if (t[j] == s[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}

void solve()
{
    string s;
    cin>>s;

    ll  x= s.length();


    map<char,int>cnt;

    if(x%2!=0)
        cout<<"NO"<<endl;
    else
    {
        vector<char>v1,v2;

      for(int i=0;i<x/2;i++)
      {
          v1.push_back(s[i]);
      }
           for(int i=x/2;i<x;i++)
      {
          v2.push_back(s[i]);
      }

      ll k=0;
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]!=v2[i])
        {
            k=1;
            break;
        }
    }

    if(k==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;




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

