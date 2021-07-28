#include<bits/stdc++.h>
#define    loop(a)           for( int i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

vector<int>v1,v2;
set<int>s;

int main()
{
  int n;
  vector<double>v;
  double sum=0;

cin>>n;

  for(int i=0;i<n;i++)
  {
      double x;
      cin>>x;
      v.push_back(x);
      sum+=x;
  }
    sort(v.begin(),v.end());
    int c=0;
    for(int i=0;i<n;i++)
    {
        double avg = sum/(double)n;
        if(avg>=4.5)
            break;
        sum=sum-v[i];
        sum=sum+5;
        c++;
    }

  cout<<c<<endl;



}
