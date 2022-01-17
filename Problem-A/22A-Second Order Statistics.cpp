#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;
const ll Inf = 1LL << 62;
const int N=2e5+5;

long long getSum(long long n)
{
    return (n*(n+1))/2;
}
bool cmp(const pair<int,int> &p1 , const pair<int,int>&p2 )
{
    if(p1.first>p2.first)
        return 1;
    else if(p1.first==p2.first)
        return (p1.second < p2.second);
    return 0;
}

void solve()
{
    set<int> s;
    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) {
        int a;
        cin >> a;
        s.insert ( a );
    }

    if ( s.size() == 1 ) cout << "NO\n";
    else {
        cout << *( ++s.begin() ) << endl;
    }

}

int main()
{
    FAST;
    long long t,a;
   // cin>>t;
    // a = 2*t;
   // while(t--)
   // {
        solve();
  //  }
    return 0;
}


