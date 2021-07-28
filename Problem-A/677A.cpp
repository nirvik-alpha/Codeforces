#include<iostream>
using namespace std;

int main()
{
	int n, h , a[100] , count=0;
	cin >> n >> h ;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < h)
		{
			count = count + 1;
		}
		else if (a[i] > h)
		{
			count = count + 2;
		}
		cout << count << endl;
	}
	
}