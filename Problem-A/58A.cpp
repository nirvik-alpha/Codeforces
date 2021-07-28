#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s , a[6]="hello";

	int i = 0;
	while (cin>>s)
	{
		if (a[i] == s)
			i++;
	}
	if (i == 5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}