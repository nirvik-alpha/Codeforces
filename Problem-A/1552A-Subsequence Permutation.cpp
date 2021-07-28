
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    ll n,c=0;
    string s,tmp;
    cin>>n;
    cin>>s;
    tmp = s;
    sort(s.begin(),s.end());


    for(int i=0;i<n;i++)
    {
        if(tmp[i]==s[i])
            c++;
    }

    cout<<n-c<<endl;

}

int main()
{
    FAST;
    long long int t,a;
    cin>>t;
    // a = 2*t;
    while(t--)
    {
        solve();
   }
    return 0;
}

