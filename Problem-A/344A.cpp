#include<iostream>
using namespace std;
int main()
{
    int n, i, count = 1;
    cin >> n;
    int a[n];
    cin >> a[0];
    for (i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {

        if (a[i] != a[i - 1])
            count++;
    }
    cout << count;
}
