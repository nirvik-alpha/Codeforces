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
    ll n,m,y;
    cin>>n>>m;

    ll a[n][m];

  vector<int>row(n,0),col(m,0);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                cin>>a[i][j];
            if(a[i][j])
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
  ll  r = count(row.begin(),row.end(),0);
   ll  c = count(col.begin(),col.end(),0);

   ll  x = min(r,c);
    if(x%2==1)
        cout<<"Ashish"<<endl;
    else
        cout<<"Vivek"<<endl;


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

