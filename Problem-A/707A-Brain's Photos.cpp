
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,x;
    cin>>n>>m;

    x=n*m;

    char str[x];
    for(i=0; i<x; i++)
    {
        cin>>str[i];
    }
    for(i=0; i<x; i++)
    {
        if(str[i]=='C'|| str[i]=='M'|| str[i]=='Y')
        {
            cout<<"#Color"<<endl;
            return 0;
        }
    }
        cout<<"#Black&White"<<endl;

    return 0;
}
