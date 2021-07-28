#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int k, w;
	 int n;
	 int sum = 0;
	cin >> k >> n >> w;

	
	for (int i = 1; i <= w; i++)
	{
		sum = sum + (i * k);
	}

	cout << max(0,(sum - n)) << endl;
}