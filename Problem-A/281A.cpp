#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        s[0] = toupper(s[0]);
        //i++;
    }
    cout << s << endl;

}
