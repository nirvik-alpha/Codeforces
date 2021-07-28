#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    while (cin >> s)
    {
        if (s == 'H' || s == 'Q' || s == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

}
