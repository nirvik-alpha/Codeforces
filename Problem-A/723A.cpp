#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int a[100], sum, x, y;

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 3);

    for (int i = 0; i < 3; i++)
    {
        x = a[i + 1] - a[i];

        y = a[i + 2] - a[i + 1];
        sum = x + y;
    }
    cout << sum << endl;
}
