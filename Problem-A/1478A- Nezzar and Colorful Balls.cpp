

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
#define Infinity  1e9

typedef long long int ll;
#include<bits/stdc++.h>
using namespace std;
const ll Inf = 1LL << 62;

const int N=2e5+5;



void solve()
{

int a[123];
int cnt[123];

  for ( int i = 1; i <= 100; i++ )
    cnt[i] = 0;
		int n;
		cin >> n;
		for ( int i = 1; i <= n; i++ ) {
			cin >> a[i];
			cnt[a[i]]++;
		}

		int ans = 0;
		for ( int i = 1; i <= n; i++ ) ans = max ( cnt[a[i]], ans );

		cout << ans << endl;
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
