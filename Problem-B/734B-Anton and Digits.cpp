
#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long a[10];
  cin>>a[2]>>a[3]>>a[5]>>a[6];
   long long res= 0;

   while(a[2]>0&&a[5]>0&&a[6]>0)
   {
     res= res+256;
     a[2]--;
     a[5]--;
     a[6]--;
   }
  while(a[2]>0&&a[3]>0)
  {
    res= res+32;
    a[2]--;
    a[3]--;
  }
  cout<<res<<endl;
}
