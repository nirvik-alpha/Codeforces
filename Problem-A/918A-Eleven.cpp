
#include<bits/stdc++.h>
#define    loop(a)           for( i=0;i<a;i++)
using namespace std;

const int N=2e5+5;

long long  a[N];

vector<int>v1,v2;
long long  fib[1000],i;
int main()
{
    fib[0] = 1;
    fib[1] = 1;
    a[1] = 1;
    for( int i=2;;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        a[fib[i]]=1;
        if(fib[i]>1000)break;
    }
    int n;
    cin>>n;
    loop(n)
    {
        if(a[i+1])cout<<"O";
        else cout<<"o";
    }


	return 0;
}
