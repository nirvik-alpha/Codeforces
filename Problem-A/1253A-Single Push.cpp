#include<bits/stdc++.h>
#define pi  pair<int,int>
using namespace std;

int main()
{
    int t,n,a[100],b[100];
    cin>>t;

    while(t--)
    {
        int i,n,k;
        vector<int>v1;
        vector<pi>v2;

        cin>>n;

        bool check = true;

        for(int i=0;i<n;i++)
        {
            cin>>k;
            v1.push_back(k);
        }
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(k!=v1[i])
            {
                if(k<v1[i])
                    check = false;
                else
                v2.push_back({i,k-v1[i]});
            }
        }
        if(!check)
        {
            puts("NO");
            continue;
        }
        if(v2.empty())
        {
            puts("YES");
            continue;

        }
        check = true;
        for(int i=0;i<v2.size()-1;i++)
        {
            pi a =v2[i] , b= v2[i+1];
            if(a.first+1!=b.first || a.second!=b.second)
            {
                check = false;
                break;
            }
        }
        if(check)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }

}
