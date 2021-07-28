
#include<bits/stdc++.h>
#define    loop(a)           for( int i=0;i<a;i++)
typedef long long ll;
using namespace std;

const int N=2e5+5;

vector<int>v1,v2;
set<int>s;

int main()
{

  int t;
	cin>>t;
	while(t--)
	{
 int n;
	cin>>n;
 int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int m=0,k=0;
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		m++;
		else if(a[i]==k)
		k++;
	}
	cout<<m+k<<endl;
	}



}
