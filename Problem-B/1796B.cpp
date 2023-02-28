
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
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

void solve()
{
    string a, b;
    cin>>a>>b;
    if(a[0]==b[0])
        cout<<"YES"<<endl<<a[0]<<"*"<<endl;
    else if(a.back()==b.back())
        cout<<"YES"<<endl<<"*"<<a.back()<<endl;
    else
    {
        string sx="";
        ll x  = a.size();
        ll y  = b.size();
        ll mi = max(a.size(),b.size());
        ll t1, t2;
        ll mx ,mn;
        ll k=0;
        for(int i=0; i<x-1; i++)
        {
            for(int j=0; j<y-1; j++)
            {
                if((a[i]==b[j]) && (a[i+1]==b[j+1]))
                {
                    k= 1;
                    t1= i;
                    t2=i+1;
                    break;
                }
            }
        }

        if(k==1){
            cout<<"YES"<<endl;
            cout<<"*"<<a[t1]<<a[t2]<<"*"<<endl;
        }
        else
            cout<<"NO"<<endl;

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





