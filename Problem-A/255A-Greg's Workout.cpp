#include <iostream>
using namespace std;

int main()
{
	int n,i,x,b=0,c=0,t=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> x;
		if(i%3==0)	c+=x;
		if(i%3==1)	b+=x;
		if(i%3==2)	t+=x;
	}

	if(c>b && c>t)	cout << "chest";
	if(b>c && b>t)	cout << "biceps";
	if(t>b && t>c)	cout << "back";
	return 0;
}
