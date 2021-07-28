

#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<long long>v;
multiset<long long>st;
multiset<long long>::iterator it;

int main()
{
    FAST;
    long long a=0,b=0,c,d,e,f=0,l,g,m,n,k,i,j,t,p,q,lo,hi,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        st.clear();
        for(i=0; i<n; i++)
        {
            cin>>p;
            v.push_back(p);
        }
        f=1;
        for(i=0;i<n-1;i++){
            if(abs(v[i]-v[i+1])>1){
                cout<<"YES\n"<<i+1<<' '<<i+2<<'\n';
                f=0;
                break;
            }
        }
        if(f)cout<<"NO\n";

    }
    return 0;
}
