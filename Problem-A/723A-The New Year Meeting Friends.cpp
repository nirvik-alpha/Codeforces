#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a, a+3);
    int x = a[1]-a[0];
    int y = a[2] - a[1];

    cout<<(x+y)<<endl;

}
