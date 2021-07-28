
#include<bits/stdc++.h>
using namespace std;

int i,n,sum,my;

int main()
{

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);

    for(i=n-1; i>=0; i--)
    {
        my+=a[i];
        if(my>sum-my)
        {
            cout<<n-i;
            return 0;
        }
    }
}
