#include <iostream>
#include <string>
#include <algorithm>
 using namespace std;

int main()
{
    string s;

    cin >> s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }
    for(int i=s.length()-1;i>=0;i--)
    {
            if(s[i]==' ' && s[i]==s[i-1])
            {
                s.erase(s.begin() + i);
            }
    }
    if(s[0]!=' ')
        {
            cout<<s<<endl;
            return 0;
        }
    else
    {
        for(int i=1;i<s.length();i++)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}
