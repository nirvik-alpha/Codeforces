#include<iostream>
using namespace std;

int main()
{
	int n ,x ,a[102];
	cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			a[x] = i;
		}

		for (int i = 1; i <= n; i++)
		{
			cout << a[i] << " ";
		}


}