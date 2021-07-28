#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,count1=0,count2=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;

    if(a>b)
        count1++;
    else if(b>a)
    count2++;
    }
    if(count1>count2)
        cout<<"Mishka"<<endl;
    else if(count2>count1)
        cout<<"Chris"<<endl;
    else if(count1==count2)
        cout<<"Friendship is magic!^^"<<endl;
}
