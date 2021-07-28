#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long   t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

         long long i =3;
        int f=0;
        while(i<=n)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
                i=i+2;

        }

        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }



}
