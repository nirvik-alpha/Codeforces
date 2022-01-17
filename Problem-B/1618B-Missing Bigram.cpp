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



void solve()
{

    ll n;
    string s[105];
   cin >> n;
        for(int i=0;i<n-2;i++) cin >> s[i];


        if(n == 3)
        {
            cout << s[0] << 'a' << endl;
        }
        else
        {
             string s1 = s[0];
        for(int i=1;i<n-2;i++)
        {
            if(s[i][0] != s[i-1][1])
            {
                s1 += s[i];
            }
            else s1 += s[i][1];
        }
        if(s1.length() != n) s1 += "a";
        cout << s1 << endl;
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

