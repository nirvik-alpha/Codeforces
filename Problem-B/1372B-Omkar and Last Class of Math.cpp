

#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define   sl(num)                scanf("%lld",&num)
#define   sll(num1,num2)         scanf("%lld %lld",&num1,&num2)
#define   slll(num1,num2,num3)   scanf("%lld %lld %lld",&num1,&num2,&num3);

#define   rep(i,n)               for(i=1;i<=n;i++)
#define   rep0(i,n)              for(i=0;i<n;i++)
#define   reps(i,a,n)            for(i=a;i<=n;i++)

#define   pb                     push_back
#define   pf                     printf

typedef long long ll;
#include<bits/stdc++.h>
using namespace std;


int main()
{
    FAST;
    ll t,n,f,i,a[n],x=0,j;
    cin>>t;
    while(t--)
    {
        cin>>n;

        f=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
            cout<<n/i<<" "<<n-(n/i)<<endl;
            f=1;
            break;
            }
        }

        if(f==0)
        {
            cout<<"1"<<" "<<n-1<<endl;
        }




    }

    return 0;
}
