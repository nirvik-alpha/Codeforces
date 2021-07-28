#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n, m, a[] = { -114514, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    cin >> n >> m;

    for (int i = 1; i <= 15; i++)
    {
        if (a[i] == n && a[i + 1] == m)
        {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;


}
