

#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                scanf("%lld",&num)
#define   sll(num1,num2)         scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)               for(i=1;i<=n;i++)
#define   rep0(i,n)              for(i=0;i<n;i++)
#define   reps(i,a,n)            for(i=a;i<=n;i++)

#define   pb                     push_back
#define   pf                     printf
#define tab                      "\t"
typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;




void solve()
{
   string s1 ,s2;
   cin>>s1>>s2;

   int x = s1.length();
   int y = s2.length();


  int lcm=(x*y)/__gcd(x,y);

  string c,d;

  for(int i=1;i<=lcm/x;i++)
    c =c+s1;

  for(int i=1;i<=lcm/y;i++)
    d =d+s2;

  if(c==d)
    cout<<c<<endl;
  else
    cout<<-1<<endl;



}



int main()
{
    FAST;
    long long t;
    cin>>t;
    while(t--)
    {
    solve();
    }
 return 0;
}
