#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		for (int i = 2; i < n; i++)
		{
			int	res = pow(2, i);
			res = res - 1;
		
			if (n % res == 0) {
				cout << n / res << endl;
				break;
			}
		}
	}
}