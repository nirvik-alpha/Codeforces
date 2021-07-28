#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;

        int z = count(s.begin()+s.find_first_of('1'),s.begin()+ s.find_last_of('1'),'0');

        cout<<z<<endl;

    }

}
