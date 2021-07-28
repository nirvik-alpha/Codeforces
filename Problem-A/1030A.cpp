#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ar[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];

		if (ar[i] == 1)
		{
			cout << "HARD";
			exit(0);
		}
	}
	cout << "EASY";
}
