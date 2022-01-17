#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef long  double lb;
//typedef variate_generator var;

#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;

const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

long long  mod = 1000000000+7;


bool isSubSequence(string t, string s, int m, int n)
{
    int j = 0;

    for (int i = 0; i < n && j < m; i++)
        if (t[j] == s[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    if(i.first<j.first)
        return i.first<j.first;
    if(i.second<j.second)
        return (i.second<j.second);

}
bool com(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first < j.first;

}

void solve()
{
   ll n,a[1000],b[1000];
   cin>>n;

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   ll cnt=0;

   for(int i=0;i<n;i++)
   {
       cin>>b[i];
       if(b[i]==1)
        cnt++;
   }
   pair<int,int>p[1000];
    for(int i=0;i<n;i++)
    {
        p[i] = make_pair(a[i],b[i]);
    }

    ll k=0;
   for(int i=1;i<n;i++)
   {
       if(p[i].first<p[i-1].first)
       {
          // if(p[i].second==p[i+1].second)
           // {
                k=1;
                break;
            //}
        }
   }

   if(k==1)
   {
       if(cnt>0 && cnt<n)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
   }
   else
    cout<<"Yes"<<endl;


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

