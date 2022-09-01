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
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		bool found = false;
		for (int j = 0; j < s.size() && j != i; j++)
		{
			if (s[i] == s[j])
				found = true;
		}
		if (found == false)
		{
			count++;
		}
	}
	if (count % 2 != 0)
		cout << "IGNORE HIM!" << endl;
	else
		cout << "CHAT WITH HER!" << endl;
}

