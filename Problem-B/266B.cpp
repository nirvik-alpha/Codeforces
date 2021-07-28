#include<bits/stdc++.h>
using namespace std;
int main() {

	int n, t, i;
	cin >> n >> t;

	string s; cin >> s;


	while (t--) {

		for (i = 0; i < n; i++) {

			if (s[i] == 'B' && s[i + 1] == 'G') {

				s[i] = 'G'; s[i + 1] = 'B'; i++;
			}
		}
	}
	cout << s;
}