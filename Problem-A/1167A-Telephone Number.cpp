
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define    loop(a)           for( long long i=0;i<(a);i++)
//#define MAX 1000005
const int MAX = 3;
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long n,x;

    cin>>n;
    string s;
   cin>>s;

  bool f=0;
        loop(n)
        {
            if(s[i]=='8' && n-i>=11)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

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
