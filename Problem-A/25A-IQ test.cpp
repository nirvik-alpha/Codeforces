#include<iostream>
using namespace std;

int main()
{
    int n,a[100],even=0,odd=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    for(int i=0;i<n;i++)
    {
        if(even>odd)
        {
            if(a[i]%2!=0)
                cout<<i+1<<endl;
        }
        else
        {
            if(a[i]%2==0)
                cout<<i+1<<endl;
        }
    }

}
