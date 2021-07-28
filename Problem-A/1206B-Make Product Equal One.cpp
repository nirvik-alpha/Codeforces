
#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long i,n,total=0,cnt=0,zero=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
      long long x;

      cin>>x;
      if(x==0)
        zero++;
      else if(x<0)
      {
          total = total+abs(x+1);
          cnt++;
      }
      else
      {
          total =total+abs(x-1);
      }

    }

    if(cnt%2==1)
      {
          if(zero)
          {

          }
            else
          {
              total=total+2;
          }
      }

        cout<<total+zero<<endl;


}
