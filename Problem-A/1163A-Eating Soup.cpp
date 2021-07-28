

typedef long long ll;

#include<bits/stdc++.h>
using namespace std;

void solve()
{
   ll n,m,x,z;
   cin>>n>>m;

    if(m==0)
        cout<<"1"<<endl;
    else if(m==1)
        cout<<"1"<<endl;
    else
    {
        x = n-m;

        z = min(x,m);
        cout<<z<<endl;
    }

}

int main()
{
//    FAST;
   // ll t;
   // cin>>t;
   // while(t--)
 //   {
        solve();

  //  }


    return 0;
}



