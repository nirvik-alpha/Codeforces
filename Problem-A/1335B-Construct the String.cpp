
#define   FAST                                  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                               scanf("%lld",&num)
#define   sll(num1,num2)                scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)                               for(i=1;i<=n;i++)
#define   rep0(i,n)                              for(i=0;i<n;i++)
#define   reps(i,a,n)                           for(i=a;i<=n;i++)

#define   pb                                         push_back

typedef long long ll;

#include<bits/stdc++.h>
using namespace std;


void solve()
{

 int n, a, b;
		cin >> n >> a >> b;
		for (int i = 0; i < n; ++i)
            {
		cout<<char('a'+i%b);
		}
		cout << endl;


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

}
