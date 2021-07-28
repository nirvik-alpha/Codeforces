
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;

void solve()
{
   ll b,p,f ,h,c ,ck,x,res;
    cin>>b>>p>>c>>h>>ck;
         res = 0;
        if(h>=ck){
            int x = min(p, b/2);
            res=res+ (x*h);
            b=b-(2*x);

            x = min(c, b/2);
            res=res+ (x*ck);
        }
        else {
            int x = min(c, b/2);
            res= res+(x*ck);
            b=b-(2*x);

            x = min(p, b/2);
            res= res+(x*h);


        }
        cout << res << endl;
}


int main()
{
//    FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}
