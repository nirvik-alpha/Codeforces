#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define tab                      "\t"
#define Infinity  1e9
#define MXE  1e5

typedef long long int ll;
typedef long  double lb;
#define me(arr,val) memset(arr,val,sizeof arr)

#include<bits/stdc++.h>
using namespace std;


const int Max = 5e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

#define INF INT_MAX
ll a[Max],cnt[Max];


int first(int n)
{
    while(n>=10)
        n/=10;

    return n;
}
int last(int n){

    return (n%10);
}
void solve()
{

    ll n, even=0;
    cin>>n;

    if(n%2==0)
        cout<<"0"<<endl;
    else
    {
        int x = first(n);
        if(x%2==0)
            cout<<"1"<<endl;
        else
        {

            while(n>0)
            {
                int rem = n%10;
                if(rem%2==0)
                    even++;

                n=n/10;
            }

            if(even==0)
                cout<<"-1"<<endl;
            else
                cout<<"2"<<endl;

        }

    }



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

