#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int x = 0;
	while (T--)
	{
		
		string s;
		cin >> s;
		if (s[1] =='+')
			x++;
		else
			x--;
	}
	cout << x << endl;
}