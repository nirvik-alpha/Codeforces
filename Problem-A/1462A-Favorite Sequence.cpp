
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define    loop(a)           for( int i=0;i<(a);i++)
//#define MAX 1000005
const int MAX = 3;
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;


vector<int>v;

void solve()
{
   ll n,a[1000];
   cin>>n;
   loop(n)
   cin>>a[i];

    ll i=0,j=n-1,flag=0;
    while(i<=j)
    {
        if(flag==0)
        {
            cout<<a[i++]<<" ";
            flag=1;
        }
        else
        {
            cout<<a[j--]<<" ";
            flag=0;
        }

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
