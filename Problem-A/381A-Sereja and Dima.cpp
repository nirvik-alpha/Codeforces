
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,n,x,s=0,d=0,f1=1;
    cin>>n;

    vector<int>v(n);

for(i=0;i<n;i++)
{
    cin>>v[i];
}

    while(!v.empty())
    {
        if(f1==1)
        {
            if(v[0]>v.back())
            {
                s = s+v[0];
                v.erase(v.begin());
            }
            else{
                s = s+v.back();
                v.pop_back();
            }
            f1=2;
        }
        else
        {
            if(v[0]>v.back())
            {
                d=d+v[0];
                v.erase(v.begin());
            }
            else
            {
                d = d+v.back();
                v.pop_back();
            }
            f1=1;
        }
    }
    cout<<s<<" "<<d<<endl;

}
