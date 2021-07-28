#include<iostream>
using namespace std;
int main() {
	int n, a, b, x, count;
	cin >> n;
	x = 0;
	count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		x = x - a + b;

		if (x >= count) 
			count = x;
	}
	cout << count;
}