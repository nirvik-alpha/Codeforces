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
    ll n,m,r,c;
    cin>>n>>m>>r>>c;

    char s[n][m];
    //string s;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
        }
    }


    ll x =0,k=0 ,z=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='B')
            {
                x=1;
                break;
            }
        }
    }

    if(x>0)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s[r-1][c-1]=='B')
                {
                    k=1;
                    break;
                }
                else
                {
                    if(s[r-1][j]=='B' || s[i][c-1]=='B')
                    {
                      z=1;
                      break;
                    }
                }
            }
        }

        if(k==1)
            cout<<"0"<<endl;
        else
        {
            if(z==1)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }

    }
    else
        cout<<"-1"<<endl;

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

