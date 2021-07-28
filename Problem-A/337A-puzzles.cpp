#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,diff,a[1010];
    cin>>n>>m;

    for(i=0;i<m;i++){
        cin>>a[i];
    }

    sort(a,a+m);

    diff=a[n-1]-a[0];

    for(i=1;i<=m-n;i++)
    {
        if(a[i+n-1]-a[i]<diff)
            diff=a[i+n-1]-a[i];
    }
    cout<<diff<<endl;
    return 0;
}

