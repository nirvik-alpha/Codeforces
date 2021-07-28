
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                scanf("%lld",&num)
#define   sll(num1,num2)         scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)               for(i=1;i<=n;i++)
#define   rep0(i,n)              for(i=0;i<n;i++)
#define   reps(i,a,n)            for(i=a;i<=n;i++)

#define   pb                     push_back
#define   pf                     printf

typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;



void solve()
{
    ll c=0,x;
string s;
cin>>s;

    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='a')
            c++;

    }
    x = s.length();

    cout<<min(x, 2*c-1)<<endl;


}

int main()
{
    solve();
 return 0;
}
