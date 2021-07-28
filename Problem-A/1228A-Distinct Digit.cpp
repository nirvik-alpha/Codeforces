
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        int x=i,visited[10]={0};
        while(x)
        {
            if(visited[x%10])
                break;

            visited[x%10]++;

            x/=10;
        }
        if(x==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
