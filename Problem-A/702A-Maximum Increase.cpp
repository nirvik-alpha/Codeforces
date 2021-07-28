
#include<bits/stdc++.h>
using namespace std;
int ara[100005];
int main()
{

    int n;
    cin >> n;
    int cnt=1,mx=1;

    for(int i=0;i<n;i++)
    cin >> ara[i];

    for(int i=1;i<n;i++)
    {
        if(ara[i]>ara[i-1])
          cnt++;
        else
         cnt=1;
        mx=max(cnt,mx);
    }
    cout << mx;

}
