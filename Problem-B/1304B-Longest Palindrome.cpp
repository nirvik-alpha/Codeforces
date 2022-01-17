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
    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (auto &u : v) cin >> u;

    bool marker[n] = {false};
    string ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (marker[i]) continue;

        string t = v[i];
        reverse(t.begin(), t.end());
        for (int j = i + 1; j < n; j++)
        {
            if (!marker[j] && v[j] == t)
            {
                ans += v[i];
                marker[i] = marker[j] = true;
                break;
            }
        }
    }

    string mid;
    for (int i = 0; i < n; i++)
    {
        if (!marker[i])
        {
            string t = v[i];
            reverse(t.begin(), t.end());
            if (t == v[i])
            {
                mid = v[i];
                break;
            }
        }
    }

    cout << 2 * ans.size() + mid.size() << "\n";
    cout << ans << mid;
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}
int main()
{
    FAST;
    long long int t,a;

    //cin>>t;
    //while(t--)
    //  {
    solve();
//    }
    return 0;
}

