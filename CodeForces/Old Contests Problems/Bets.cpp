#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include "string.h"
using namespace std;

int main()
{
	int t;
	cin >> t;
	int** arr = new int*[t];
	for (int i = 0; i < t; i++)
	{
		arr[i] = new int[2];
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < t; i++)
	{
		int a = arr[i][0];
		int b = arr[i][1];
		if (a == b)
		{
			cout << "0 0" << endl;
			continue;
		}
		int gcd = max(a, b) - min(a, b);
		cout << gcd << " " << min((a % gcd), gcd - (a % gcd)) << endl;
	}
}
