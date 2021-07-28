#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[100],sum=0;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum =sum + a[i];
        }

        if(sum%2==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
