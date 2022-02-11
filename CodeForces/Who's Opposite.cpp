#include <iostream>
#include <string>
#include <vector>
#include "math.h"
using namespace std;

int main()
{
	int t;
	cin >> t;
	int* arr = new int[t];
	int n;
	int a, b, c;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c;
		n = abs(a - b) * 2;
		if (abs(a - b) <= 1 || a > n || b > n || c > n)
		{
			arr[i] = -1;
			continue;
		}
		if (c - (n / 2) <= 0)
			arr[i] = c + (n / 2);
		else if (c + (n / 2) > n)
			arr[i] = c - (n / 2);
		else
			arr[i] = -1;
	}
	for (int i = 0; i < t; i++)
	{
		cout << arr[i] << endl;
	}
}
