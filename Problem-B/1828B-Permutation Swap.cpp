///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int  ll;
#define     INF                             (ll)1e9
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7,siz = 1e6+5;
bool have[siz];

bool cmp(pair<string, int>& a, pair<string, int>& b){return a.second < b.second;}
/////////////////////////
ll gcd(ll a, ll b){if(b==0) return a;return gcd(b, a%b);}
///////////////////////////////////////////////////////////
bool is_inside(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}
 /////////////////////////////////////////////////
int dx[] ={1,-1,0 ,0 };
int dy[] = { 0 ,0 ,1, -1};

ll cnt =0;
ll a[1005][1005];

int dfs(int i,int j)
{
	if(a[i][j]==0)
        return 0;
	else
	cnt+=a[i][j];

	a[i][j]=0;
	dfs(i+1,j);
	dfs(i,j+1);
	dfs(i-1,j);
	dfs(i,j-1);
}

void solve()
{
   ll n;
   cin>>n;
   vector<ll>v;
    ll a[n];
    map<ll , ll>m1 ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       // m1[a[i]] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        ll x  = abs(a[i]-(i+1));
        v.push_back(x);
    }
    vector<ll>v2;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]!=0)
       {
           v2.push_back(v[i]);
       }
   }

   unordered_map<ll, ll> hash;
    for (int i = 0; i < v2.size(); i++)
        hash[v2[i]]++;

    ll gcdx ;
    ll max_count = 0, res = 1;
//    for (auto i : hash) {
//        if (max_count < i.second) {
//            res = i.first;
//            max_count = i.second;
//        }
//    }

    for (auto i : hash) {
        gcdx = i.first;
       break;
    }

    for (auto i : hash) {
       gcdx = gcd(gcdx,i.first);
    }

   cout<<gcdx<<endl;
}



int main()
{

    FAST;

    ll t;

    cin>>t;
    for(int d=1; d<=t; d++)
    {
        solve();
    }

}




 