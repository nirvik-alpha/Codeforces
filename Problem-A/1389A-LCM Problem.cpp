#include<iostream>
using namespace std;

int main()
{
    long long t,n,l,r;
    cin>>t;

    while(t--)
    {
    cin>>l>>r;

    if((2*l)>r)
        cout<<-1<<" "<<-1<<endl;
    else
        cout<<l<<" "<<2*l<<endl;

    }

}
