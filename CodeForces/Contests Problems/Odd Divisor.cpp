#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int t; // test cases
	bool Odd_Divisor;
	cin >> t;
	long long* arr = new long long[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < t; i++)
	{
		Odd_Divisor = 0;
		if (arr[i] > 1 && arr[i] % 2 != 0)
			Odd_Divisor = 1;
		else
		{
			for (int j = 1; j <= arr[i]; j++)
			{
				if ((j > 1) && (j % 2 != 0))
				{
					if (arr[i] % j == 0)
					{
						Odd_Divisor = 1;
						break;
					}
				}
			}
		}
		if (Odd_Divisor)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	delete[] arr;
}
