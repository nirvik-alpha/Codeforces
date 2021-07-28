

typedef long long ll;

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
        cin >> n;
        vector<int> s(n);

        for(int i = 0; i < n; i++)
            cin >> s[i];

        sort(s.begin(), s.end());

        int ans = 1e9;

        for(int i = 1; i < n; i++)
            ans = min(ans, abs(s[i]-s[i-1]));

        cout << ans << endl;
}

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }


    return 0;
}



