#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t,x;
    cin>>s;


    for(int i=1;i<s.length();i++)
    {
        if(islower(s[i]))
            {cout<<s<<endl;
                     return 0;
            }

    }
    for(int i=0;i<s.length();i++)
    {
        s[i] = s[i]^32;
    }

    cout<<s<<endl;
    return 0;
}
