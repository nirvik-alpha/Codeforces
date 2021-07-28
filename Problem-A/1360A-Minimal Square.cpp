
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, a, b, x;

	cin >> t;
	while(t--)
        {

		cin >> a >> b;

		x = max(2*min(a, b), max(a, b));

		cout << x * x << endl;

	}

	return 0;
}
