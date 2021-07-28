#include <iostream>
using namespace std;

  int a[3],n,x;

int main()
{

    cin>>n;

    for(int i=0; i<3; i++)
     {
        for (int j=0; j<n-i; j++)
    {
        cin>>x;
        a[i]+=x;
    }
     }
    cout<<a[0]-a[1]<<endl;
    cout<<a[1]-a[2];

}
