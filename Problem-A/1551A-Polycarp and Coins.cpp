#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long int  n ;
    cin>>n;

    if(n%3==0)
        cout<<n/3<<" "<<n/3<<endl;
    else if(n%3==1)
    {
        cout<<(n/3)+1<<" "<<n/3<<endl;
    }
    else if(n%3==2)
    {
        cout<<(n/3)<<" "<<(n/3)+1<<endl;
    }




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


