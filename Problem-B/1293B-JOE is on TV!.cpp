
#include<bits/stdc++.h>
#define N ((int)2e5 + 5)
using namespace std;

int main()
{
  double n,i,sum;
  cin>>n;
  sum =1;
    for(i=2;i<=n;i++)
  {
      sum =sum+1/i;
  }
  cout<<fixed<<setprecision(12)<<sum<<endl;


}
