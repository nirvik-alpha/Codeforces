#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int a[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxx=-1,minn = a[0] ,l=0,r=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxx)
        {
        maxx=a[i];
            l =i;
        }

        if(a[i]<=minn)
        {
        minn=a[i];
            r =i;
        }
    }

    if(r<l)
        cout<<l+(n-r-2)<<endl;
    else
        cout<<l+(n-r-1)<<endl;


}
