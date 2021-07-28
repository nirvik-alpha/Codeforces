
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
    ll n,x,z;
    cin>>n;


        if(n%2==0)
        {
            loop(n/2)
            cout<<"1";

            cout<<endl;
        }
        else{
            cout<<"7";
            n=n-3;
            z=n/2;
            while(z--)
            {
                cout<<"1";
            }

            cout<<endl;
        }



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
