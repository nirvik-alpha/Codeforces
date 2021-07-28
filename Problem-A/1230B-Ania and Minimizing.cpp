
#include<bits/stdc++.h>
#define    loop(a)           for( int i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

int main()
{
   ll n,k;
   string s;

   cin>>n>>k;
   cin>>s;

   if(n==1 && k==1)
    {
        cout<<"0";
        return 0;
    }
    if(s[0]>'1' && k)
    {
        s[0] = '1';
        k--;
    }

  for(int i=1;k&&i<n;i++)
  {
     if(s[i]>'0')
     {s[i]  ='0';
      k--;
     }
  }
  cout<<s;




}
