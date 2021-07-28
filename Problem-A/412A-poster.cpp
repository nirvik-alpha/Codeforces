
#include<bits/stdc++.h>
#define    loop(a)           for( i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

long long  a[N];

vector<int>v1,v2;
set<int>s;

long long  fib[1000],i;
int main()
{
    ll n,l,r,x,y;
    string s;
    cin>>n>>l;
    cin>>s;


    if(l==1)
    {
        loop(n)
        {
        cout<<"PRINT"<<" "<<s[i]<<endl;
        if(i!=n-1)
        cout<<"RIGHT"<<endl;
        }
    }
    else if(l==n)
    {
       for(i=n-1;i>=0;i--)
       {
        cout<<"PRINT"<<" "<<s[i]<<endl;
        if(i!=0)
        cout<<"LEFT"<<endl;
      }
    }
    else
    {
        if(l<=n/2)
        {
            x=l-1;
            while(x--)
                cout<<"LEFT"<<endl;

            for(i=0;i<n;i++)
            {

            cout<<"PRINT"<<" "<<s[i]<<endl;
            if(i!=n-1)
            cout<<"RIGHT"<<endl;
            }
        }
        else
        {
            y=n-l;
            while(y--)
                cout<<"RIGHT"<<endl;

          //return 0;
        i=n-1;
         while(i>=0)
           {
            cout<<"PRINT"<<" "<<s[i]<<endl;
            if(i!=0)
           cout<<"LEFT"<<endl;
           i--;
           }
        }

    }

}
