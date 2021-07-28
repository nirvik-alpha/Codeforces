


#include<bits/stdc++.h>
#define    loop(a)           for( int i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

vector<int>v1,v2;
set<int>s;

int main()
{
    int c=0;
    string s;
    cin>>s;
    int n =s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
            c++;

    }
    if(c==1 || (c==0 && n%2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
