#include<iostream>
using namespace std;

int main()
{
    double n, a[100];
    int sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        sum = sum + a[i];
    }

    cout << double(sum / n) << endl;

}
