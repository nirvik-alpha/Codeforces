
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;

        char a = s[s.size()-1];

        if(a=='o')
            cout<<"FILIPINO"<<endl;
        if(a=='u')
            cout<<"JAPANESE"<<endl;
        if(a=='a')
            cout<<"KOREAN"<<endl;
    }

    }

