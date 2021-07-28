
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i;
    cin>>n;

    if(n%2==1)
        cout<<-1<<endl;
    else
    {
        for(i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
    }
}
