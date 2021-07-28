
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,i,a[100000],c=0;
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i] = a[i] +k;
        if(a[i]<=5)
            c++;
    }
    cout<<c/3<<endl;

    }
