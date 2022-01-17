#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
   ll n;
   cin>>n;

   ll x = n/2;

   if(x==2)
    cout<<"2"<<" "<<(2*2)<<endl;
   else
    cout<<"2"<<" "<<x<<endl;



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


