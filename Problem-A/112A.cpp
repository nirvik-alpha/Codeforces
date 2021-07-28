#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s1[101], s2[101];
	cin >> s1 >> s2;

	cout << stricmp(s1, s2) << endl;

	return 0;
}