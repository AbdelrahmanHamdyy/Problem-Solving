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
	int n;
	string s;
	cin >> n >> s;
	int A = 0;
	int D = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'A')
			A++;
		else
			D++;
	}
	if (A > D)
		cout << "Anton" << endl;
	else if (A < D)
		cout << "Danik" << endl;
	else
		cout << "Friendship" << endl;
}

