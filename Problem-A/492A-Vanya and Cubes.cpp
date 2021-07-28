
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i=0,s=0,sum=0;
    cin>>n;

    for( i=1;sum<=n;i++)
    {
        s = s+i;
        sum = sum+s;
    }
   cout<<i-2;
}
