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
   string s1,s2;

   cin>>s1>>s2;

   vector<ll>v,v2;

   ll k;
   for(int j=0;j<s2.length();j++)
   {
       for(int i=0;i<s1.length();i++)
       {
           if(s1[i]==s2[j])
           {
               k =i;
               v.push_back(k+1);
           }
       }
   }


 ll sum=0,x;
   for(int i=1;i<v.size();i++)
   {
     x=abs(v[i]-v[i-1]);
     v2.push_back(x);
   }

   for(auto u1 :v2)
    {
        sum = sum+u1;
    }

   cout<<sum<<endl;

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

