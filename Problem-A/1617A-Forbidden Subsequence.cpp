#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef long  double lb;
#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;

const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

long long  mod = 1000000000+7;

ll n,a[105];

ll Calculate(ll value)
{
    ll res = 0;
    for(int i=1; i<n; i++)
    {
        if(a[i]+value-1<a[i+1])
            res += value;
        else
            res += (a[i+1]-a[i]);
    }
    res += value;
    return res;
}

bool isSubSequence(string t, string s, int m, int n)
{
    int j = 0;

    for (int i = 0; i < n && j < m; i++)
        if (t[j] == s[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}

void solve()
{
    string s ,t;
    cin>>s>>t;

    ll sa=0 ,sb=0 ,sc =0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a')
            sa++;
        else if(s[i]=='b')
            sb++;
        else if(s[i]=='c')
            sc++;
    }

    ll total = sa +sb+sc;


   sort(s.begin(),s.end());

   if(t=="abc")
   {
       if(sa==0|| sb==0 || sc==0)
        cout<<s<<endl;
       else
       {
           for(int i=1;i<=sa;i++)
           {
               cout<<"a";
           }

             for(int i=1;i<=sc;i++)
           {
               cout<<"c";
           }
               for(int i=1;i<=sb;i++)
           {
               cout<<"b";
           }
           for(int i=total;i<=s.length()-1;i++)
           {
               cout<<s[i];
           }
           cout<<endl;
       }

   }
   else
    cout<<s<<endl;




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

