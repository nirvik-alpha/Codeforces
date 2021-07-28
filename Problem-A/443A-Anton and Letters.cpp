#include<bits/stdc++.h>
using namespace std;

// map<string ,int> m;

int main()
{

    map<string ,int> m;

    string s;
        int c=0;
    cin>>s;

    for(int k=0;k<s.length();k++)
    {
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                 if(s[i]==s[j])
                    break;
                 else
                    c++;
            }
        }
        m.push_back(c);
    }

    cout<<m<<endl;


}
