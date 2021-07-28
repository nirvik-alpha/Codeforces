
#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,c=0,temp;
    cin>>n>>k;

    while(n)
    {
    if(n%k!=0)
    {
        temp = n%k;
        n=n-temp;
        c = c+ temp;
    }
    else
    {
        n=n/k;
        c++;
    }
    }
    cout<<c<<endl;

    }

}
