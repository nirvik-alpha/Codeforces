#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t,n,a,b,x;
    cin>>t;

    while(t--)
    {
        cin>>n>>x>>a>>b;

        if(x==0)
            cout<<abs(a-b)<<endl;
        else if(x>1)
        {
                if((a>>b) || (b>>a))
                cout<<abs(a-b)<<endl;
                //else
                //{
                    if(a>b)
                      cout<<abs(a+1-b)<<endl;
                    else
                        cout<<abs(b+1-a)<<endl;
                //}
        }

    }

}
