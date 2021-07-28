
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,j,sum=0,a[1000];
// string

    cin>>n>>m;
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

   for(i=0;i<m;i++)
   {
       if(a[i]<0)
        {
            sum = sum+ a[i];
        }
        else
            break;
   }

   cout<<-sum<<endl;

}
