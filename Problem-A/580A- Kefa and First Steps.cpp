#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a,c=0,d=0;

    cin>>a;

    int b[a];

    for(int i=0; i<a; i++)
    {
        cin>>b[i];

        if(b[i]>=b[i-1])
            c++;
        else
            c=1;
        d=max(d,c);

    }
    cout <<d;
}
