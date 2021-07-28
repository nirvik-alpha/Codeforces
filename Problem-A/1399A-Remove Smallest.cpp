
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i,a[n];

        for(i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        ll flag=0;

        for(i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
}
