#include <iostream>
using namespace std;

long long a,b,x,y;

main()
{

    cin >> a >> b;

     y = (a+1)/2;
    if(b>y)
    {
        x=(b-y)*2;

    }
    else
        x=2*b-1;

    cout<<x<<endl;

}
