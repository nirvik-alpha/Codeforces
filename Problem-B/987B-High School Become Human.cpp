
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,a,b;
    cin>>x>>y;

        if(y*log(x)>x*log(y))
            cout<<">";
        else if(y*log(x)<x*log(y))
            cout<<"<";
        else
            cout<<"=";
return 0;
}
