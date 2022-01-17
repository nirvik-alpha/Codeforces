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

void solve()
{
    ll n,sum=0,a[10000];
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum = sum +a[i];
    }

    if(sum%n==0)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;



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

