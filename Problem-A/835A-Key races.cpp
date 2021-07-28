#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

long long  a[N];
vector<int>v;

int main()
{

   long long  s,v1,v2,t1,t2,x,y;
   cin>>s>>v1>>v2>>t1>>t2;

   x = s*v1 +t1*2;
    y = s*v2 +t2*2;

   if(x<y)
    cout<<"First"<<endl;
   else if(x>y)
    cout<<"Second"<<endl;
    else
    cout<<"Friendship"<<endl;



}
