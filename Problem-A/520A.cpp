#include<bits/stdc++.h>
//#include<string>
#include<iostream>
#include<set>
using namespace std;

int n;
string s;
set<char> st;

main() {
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++)
	st.insert(tolower(s[i]));
	
	if (st.size() == 26)
		cout << "YES";
	else
		cout << "NO";
}
