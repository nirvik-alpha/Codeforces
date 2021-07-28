
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a[100],b[100];
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<k;j++)
    {
        cin>>b[j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(a[i]==b[j])
                cout<<b[j]<<" ";

        }

    }

    }
