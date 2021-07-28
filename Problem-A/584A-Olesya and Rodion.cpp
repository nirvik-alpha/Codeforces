
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,t,i=1,x;
    cin>>n>>t;
    if(n==1&&t==10)
    {
        cout<<"-1";
        return 0;
    }
    cout<<t	;
    if(t==10)
        i++;
    for(x=i; x<n; x++)
    {
        cout<<"0";
    }

}
