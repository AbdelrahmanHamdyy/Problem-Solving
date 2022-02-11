#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int lower_count = 0;
	int upper_count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (int(s[i]) >= 97)
			lower_count++;
		else
			upper_count++;
	}
	if (lower_count >= upper_count)
	{
		for (int i = 0; i < s.size(); i++)
		{
			s[i] = tolower(s[i]);
		}
	}
	else if (upper_count > lower_count)
	{
		for (int i = 0; i < s.size(); i++)
		{
			s[i] = toupper(s[i]);
		}
	}
	cout << s << endl;
}

