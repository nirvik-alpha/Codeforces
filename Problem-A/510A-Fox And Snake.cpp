
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,j;
    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2!=0)
            cout<<"#";
        else if(i%4==0 && j==1)
            cout<<"#";
        else if(j==m && i%4!=0)
        cout<<"#";
            else
            cout<<".";
             }
         cout<<endl;

    }






}
