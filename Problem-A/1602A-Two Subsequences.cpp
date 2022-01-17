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

    string z = s;

  sort(s.begin(),s.end());

   cout<<s[0]<<" ";

   ll f=0;

   for(int i=0;i<z.length();i++)
   {
       if(z[i]==s[0])
       {
         if(!f)
            f=1;
            else
                cout<<z[i];
       }
       else
       {
           cout<<z[i];
       }
   }

    cout<<endl;

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

