
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
    cin>>n>>k;

    if(n%k==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
}
