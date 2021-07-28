
#include<bits/stdc++.h>
using namespace std;


const int N =2e5+5;

  long long a[N];
int main()
{
    long long  n,i,sum=0,x;
    cin>>n;

    for(i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(i=n,x=1e9+7;i>=0;i--)
    {
        x=min(x-1,a[i]);
        if(x<0)
            x=0;
        sum=sum+x;
    }
    cout<<sum<<endl;


}
