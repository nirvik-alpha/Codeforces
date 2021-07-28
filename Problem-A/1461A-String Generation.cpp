
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define    loop(a)           for(int i=0;i<(a);i++)
//#define MAX 1000005
const int MAX = 3;
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
    ll n,k,x;
    cin>>n>>k;

    loop(n)
    {
        if(i%3==0)
            cout<<"a";
        else if(i%3==1)
            cout<<"b";
        else
            cout<<"c";
    }
    cout<<endl;
}
int main()
{
    FAST;
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
