
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[4]={'a','a','b','b'};
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<s[i%4];
    }

}
