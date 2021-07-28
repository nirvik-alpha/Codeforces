#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int  a = count(s.begin(), s.end(), 'A');

    int b = (n - a);

    if (b > a)
        cout << "Danik" << endl;
    else if (a > b)
        cout << "Anton" << endl;
    else
        cout << "Friendship" << endl;


}
