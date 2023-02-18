

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
    ll n;
    string s;
    cin>>n>>s;

    string ans;
    if(s[0]!='9')
    {
        for(int i=0;i<n;i++)
        {
            int x = s[i]-'0';
            int y = 9 - x;
            ans += y+'0';
        }
    }
    else
        {
          ll c=0;
         for(int i =n-1;i>=0;i--)
        {
            int x = s[i]-'0';
           x+=c;
           if(x>1)
           {
               int  y = 11- x;
               c = 1;
               ans += y+'0';
           }
           else{
                c = 0;
                int y = 1- x;
                ans+= y+'0';
           }

        }
        reverse(ans.begin(),ans.end());
    }
    cout<<ans<<endl;






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

