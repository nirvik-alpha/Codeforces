
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,q,x,a[100000],z,c=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;

  while(q--)
  {
    cin>>x;

    z = upper_bound(a,a+n,x)-a;

    cout<<z<<endl;

  }




}
