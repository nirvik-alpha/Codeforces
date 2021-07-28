#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,c=0;
    cin>>n;

    for(int i=1;i<n;i++)
    {
         x = (n-i);

        if(x%i==0)
        {
            c++;
        }
    }
    cout<<c<<endl;


}
