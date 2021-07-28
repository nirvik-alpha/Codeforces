#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >>T;
	int x = 0;
	while (T--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if ((a + b + c) > 1)
		{
			x++;
		}
	}
	cout << x << endl;
}
