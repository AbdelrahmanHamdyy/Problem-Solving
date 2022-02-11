#include <iostream>
#include <string>
#include <vector>
#include "math.h"
using namespace std;

int main()
{
	string s;
	cin >> s;
	int ptr = 0;
	int rot = 0;
	for (int i = 0; i < s.size(); i++)
	{
		int j = s[i] - 97;
		if (abs(ptr - j) < 13)
			rot += abs(ptr -j);
		else
			rot += 26 - abs(ptr - j);
		ptr = j;
	}
	cout << rot << endl;
}
