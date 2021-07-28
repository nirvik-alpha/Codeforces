#include<iostream>
using namespace std;

int main()
{
    int k, r, i;
    cin >> k >> r;
    if (1)
    {
        for (int i = 1; i <= 10; i++)
        {
            int x = k * i;

            if ((x % 10) == r)
            {
                cout << i << endl;
            }
        }
    }
    else {
        for (int i = 1; i <= 10; i++)
        {
            int x = k * i;

            if ((x % 10) != r)
            {
                cout << r << endl;
            }
        }
    }
}
