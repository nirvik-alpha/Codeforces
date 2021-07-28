#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x = (k * l) / nl;
    int  y = c * d;
    int z = p / np;

    int a = min(min(x, y), z) / n;
    cout << a << endl;
}
