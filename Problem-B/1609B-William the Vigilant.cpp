#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
#define MXE  1e5

typedef long long int ll;
typedef long  double lb;
#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;


const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

#define INF INT_MAX
ll a[Max],cnt[Max];


int first(int n)
{
    while(n>=10)
        n/=10;

    return n;
}
int last(int n)
{

    return (n%10);
}

string s;

ll ok(string s)
{
    ll c=0;
    ll si=s.size();
    for(ll i=0; i<si-2; i++)
    {
        if(s.substr(i,3)=="abc")
        {
            c++;
        }
    }
    return c;
}
void solve()
{
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;

    ll c=ok(s);
    while(q--)
    {

        ll pos;
        char ch;
        cin>>pos>>ch;

        pos=pos-1;
        if(s[pos]==ch)
        {

        }
        else
        {

            ll start=max(0ll,pos-3);
            ll ending=min(n-1,pos+3);

            ll check1=ok(s.substr(start,ending-start+1));

            s[pos]=ch;

            ll check2=ok(s.substr(start,ending-start+1));

            c+=(check2-check1);

        }
        cout<<c<<endl;





    }

}


int main()
{
    FAST;
    long long int t,a;

    // cin>>t;
    // while(t--)
    //{
    solve();
    //}
    return 0;
}

