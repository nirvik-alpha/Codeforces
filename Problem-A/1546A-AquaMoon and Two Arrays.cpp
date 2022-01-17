#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9

typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int  n;
    cin >> n;

    vector< int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int sum1 = accumulate(begin(a), end(a), 0);
    int sum2 = accumulate(begin(b), end(b), 0);

    if (sum1 != sum2)
    {
        cout << -1 << endl;
        return;
    }

    vector< int> v1, v2;

    for (int i = 0; i < n; i++)
    {
        while (a[i] > b[i])
        {
            v1.push_back(i);
            a[i]--;
        }

        while (b[i] > a[i])
        {
            v2.push_back(i);
            b[i]--;
        }
    }


    cout << v1.size() << endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] + 1 << " " << v2[i] + 1 << "\n";

}

int main()
{
    FAST;
    long long int t,a;
    cin>>t;
    // a = 2*t;
    while(t--)
    {
        solve();
    }
    return 0;
}


