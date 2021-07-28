
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
  ll n,m,k,x,y,one=0,two=0,rem,c;
  cin>>n>>m>>k;

  loop(n)
  cin>>a[i];

  loop(n)
  {
      if(a[i]==1)
      {
          one++;
      }
      else if(a[i]==2)
        two++;
  }
 x=one-m;
    if(x<=0){
        x=0;
        rem=m-one;
    }
    else{
        x=x;
        rem=0;
    }
    k=k+rem;
    y=two-k;
    if(y<=0){
        y=0;
    }
    else{
        y=y;
    }
    c=x+y;

    cout<<c<<endl;
     return 0;

}
