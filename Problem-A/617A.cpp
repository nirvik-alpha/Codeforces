#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int count = 0;
	if (x % 5 == 0)
	{
		int l = x / 5;
		cout << l << endl;
	}
	else if(x % 5 != 0)
	{
		int l = x / 5;
		if (x % 5) {
			count++;
		}
		int z = l + count;
		cout << z << endl;
	}
}