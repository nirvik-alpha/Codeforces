#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%4!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			for(int i=1;i<=n/2;i++)
				cout<<i*2<<' ';
			for(int i=1;i<n/2;i++)
			cout<<i*2-1<<' ';
			cout<<n+n/2-1<<'\n';
		}

	}
}
