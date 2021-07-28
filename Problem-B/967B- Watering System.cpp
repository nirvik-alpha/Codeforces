
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,a1[100007],sum=0;
    int n;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++) {
        cin>>a1[i];
        sum+=a1[i];
    }
    sort(a1+1,a1+n,greater<double>());

    double a2=(a*a1[0])/sum;

    if(a2>=b)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        sum-=a1[i];
        a2=(a*a1[0])/sum;
        if(a2>=b)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
