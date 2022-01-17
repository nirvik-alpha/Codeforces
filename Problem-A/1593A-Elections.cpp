#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
#define MXE  1e5
typedef long long int ll;
typedef long  double lb;

#include<bits/stdc++.h>
using namespace std;


const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll a[Max],cnt[Max];

void solve()
{
  ll a,b,c;
  cin>>a>>b>>c;

    ll x = max(c,max(a,b));

    ll ab , ac , ba, bc , ca , cb;

        if(a<b)
        {
         ab = b-a+1;
        }
        else
        {
            if(a==b)
                ab=1;
            else
                ab=0;
        }

     if(a<c)
        {
         ac = c-a+1;
        }
        else
        {
             if(a==c)
                ac=1;
            else
                ac=0;
        }


       /////////////////////b////////////
        if(b<a)
        {
         ba = a-b+1;
        }
        else
        {
            if(b==a)
                ba=1;
            else
                ba=0;
        }

        if(b<c)
        {
            bc = c-b+1;
        }
          else
        {
            if(b==c)
                bc=1;
            else
                bc=0;
        }

        //////////////////b////////////


        if(c<a)
        {
         ca = a-c+1;
        }
        else
        {
            if(c==a)
                ca=1;
            else
                ca=0;
        }

        if(c<b)
        {
            cb = b-c+1;
        }
          else
        {
            if(c==b)
                cb=1;
            else
                cb=0;
        }

    cout<<max(ab,ac)<<" "<<max(ba,bc)<<" "<<max(ca,cb)<<endl;



}





int main()
{
    FAST;
    long long int t,a;

    cin>>t;
   while(t--)
    {
        solve();
   }
    return 0;
}

