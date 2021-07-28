
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
   		string s;
		cin>>s;

		ll n=s.size();

		ll x[n+1],y[n+1],ans=INT_MAX;

		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));

		for(ll i=0;i<n;i++){
			if(i==0) x[i]=(ll)s[i]-'0';
			else{
				x[i]=x[i-1];
				x[i]+=((ll)s[i]-'0');
			}
		}

		for(ll i=n-1;i>=0;i--){
			y[i]=y[i+1];
			y[i]+=((ll)s[i]-'0');
		}

		for(ll i=0;i<n;i++){
			ans=min(ans,i+1-x[i]+y[i+1]);
			ans=min(ans,x[i]+(n-i-1)-y[i+1]);
		}
		cout<<ans<<endl;
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
