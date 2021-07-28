
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n ,l,i,sum=0,a[1000],diff;
    cin>>n>>l;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    double  ans = max(a[0] , l-a[i-1]);
    for(int i=0;i<n-1;i++)
    {
        ans = max(ans,(a[i+1]-a[i])/2.0);
    }
    printf("%.10lf\n",ans);

}
