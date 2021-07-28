#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s[100];
	cin >>s;

	int upper_count=0 , lower_count=0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			upper_count++;
		if(s[i] >= 97 && s[i] <= 122)
			lower_count++;
	}

	if (upper_count > lower_count)
	{
		strupr(s);
		//cout << s << endl;
	}
	else {
		strlwr(s);
	}

		cout << s << endl;
	

	return 0;
}