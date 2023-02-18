

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
    cin>>n;

        ll a[n];
        bool v[n+1];

        for(int i=0; i<=n; i++){
            v[i]=false;
        }

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
       ll last=-1;
        for(int i=n-2; i>=0; i--)
        {
            if(a[i]>a[i+1]){
                last=i;
                break;
            }
        }

        if(last==-1){
            cout<<"0"<<endl;
        }
        else{



        for(int i=0; i<=last; i++)
        {
            v[a[i]]=true;
        }

        for(int i=last+1; i<n; i++)
        {
            if(v[a[i]]==true){
                last=i;
            }
        }

        for(int i=last; i>=0; i--){
            v[a[i]]=true;
        }
        ll ans=0;

        for(int i=1; i<=n; i++)
        {
            if(v[i]==true){
                ans++;
            }

        }
        cout<<ans<<endl;
        }
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

