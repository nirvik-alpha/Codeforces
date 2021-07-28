
#include<bits/stdc++.h>
using namespace std;

int main()
{

//    fast;

    long long int n,c=0,i;

    cin>>n;
    string s;
    cin>>s;

    for(i=0;i<n;i++){
        if(s[i]=='-'){
            if(c)
                c--;
        }
        else
            c++;
    }

    cout<<c<<endl;

}
