

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
int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

bool isPalindrome(string S)
{

    string P = S;

    reverse(P.begin(), P.end());

    if (S == P) {

        return 1;
    }
    // Otherwise
    else {
        // return "No"
        return 0;
    }
}

void solve()
{
    ll n, m;
    cin>>n>>m;
    ll a[m];
    for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
    map<int,int>mp;

    ll st = n;
    ll c=1;
    vector<int>v,vx;
    for(int i=0;i<m;i++)
    {
        if(st!=0)
        {
        if(mp.find(a[i])==mp.end())
        {
            mp[a[i]] = 1;
            mp[st] = c;
            st--;
        }
        c++;
        }
        else{
                break;
        }

    }
    for(auto u : mp)
    {
        if(u.first<=n)
           v.push_back(u.second);
    }
    ll x = n-v.size();
    while(x--)
        vx.push_back(-1);

    for(auto u :v)
        vx.push_back(u);

        for(auto u :vx)
            cout<<u<<" ";

    cout<<endl;

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




