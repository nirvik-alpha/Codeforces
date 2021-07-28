#include<bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;
char c;
set<char>s;
int main() {
	while (cin >> c)
		s.insert(c);

	if (s.size() % 2 == 0) 
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
}
