
#include<bits/stdc++.h>
#define N ((int)2e5 + 5)
using namespace std;

int arr[N];

int main()
{
   int n;


    cin>>n;

    for(int i = 1; i<=n; i++)
        cin>>arr[i];

    int mxx = 0;

    for(int i = 1; i<=n; i++){
        arr[i] += mxx;
        mxx = max(mxx,arr[i]);
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;


}
