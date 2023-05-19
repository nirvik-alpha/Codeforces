///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int  ll;
#define     INF (ll)1e9
#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define pb push_back

const int mod = 1e9+7,siz = 1e6+5;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}
/////////////////////////
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
///////////////////////////////////////////////////////////
bool is_inside(int x, int y, int n, int m)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}
/////////////////////////////////////////////////
int dx[] = {1,-1,0,0 };
int dy[] = { 0,0,1,-1};

int deleteElement(int arr[], int n, int x)
{

    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            break;
        }
    }


    if (i < n) {

        n = n - 1;
        for (int j = i; j < n; j++) {
            arr[j] = arr[j + 1];
        }
    }

    return n;
}




void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n),v1,v2;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll x =  *min_element(v.begin(),v.end());
    ll k=0;
    for(int i=0;i<n-1;i++)
    {
        ll x = v[i];
        ll y = v[i+1];
        if((x%2)!=(y%2))
        {
            k=1;
            break;
        }
    }
    if(k==0)
    {
        cout<<"YES"<<endl;
    }
    else{

        if(x%2==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }



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




 