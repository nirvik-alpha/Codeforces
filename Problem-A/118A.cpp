
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char s;
	cin >> s;
	while (s)
	{
		s = tolower(s);

		if (!(s == 'a'|| s == 'e'|| s == 'i'|| s == 'o'|| s == 'u'|| s == 'y'))
		{
			cout<< "." << s ;
		}
	}


	return 0;
}
