#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
#define MXE  1e5
typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll a[Max],cnt[Max];

void solve()
{
   string s;
   cin>>s;

   //for(int i=0;i<s.ength();i++)
   //{
   //    if(s[i]=='A')
//a++;
//
  // }

   int x=count(s.begin(),s.end(),'A');
    int y =count(s.begin(),s.end(),'B');
     int z=count(s.begin(),s.end(),'C');


    if(y==(x+z))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



}





int main()
{
    FAST;
    long long int t,a;

    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

