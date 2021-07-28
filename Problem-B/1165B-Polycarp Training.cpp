
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

long long a[N];
vector<long long>v;

int main()
{
    long long n,i,j,z,c=0,x=1;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>z;
        v.push_back(z);
    }
    sort(v.begin(),v.end());

    for(i=0;i<n;i++)
    {
        if(v[i]>=x)
        {
            x++;
            c++;
        }
    }
       cout<<c<<endl;



}
