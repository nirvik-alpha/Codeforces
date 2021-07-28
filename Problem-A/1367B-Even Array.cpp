
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MAX 1000005
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,i,c=0,b=0,a[1000];
    cin>>n;

    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i=0;i<n;i++)
    {
        if(a[i]%2!=i%2)
            {
                if(i%2==0)
                    c++;
                else
                    b++;
            }
    }
    if(c!=b)
        cout<<"-1"<<endl;
    else
        cout<<c<<endl;

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
}
