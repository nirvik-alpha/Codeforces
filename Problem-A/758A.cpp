#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100], sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1])
        {
            sum = sum + (a[n - 1] - a[i]);
        }
    }
    cout << sum << endl;

}
