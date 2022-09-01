#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
const int year_2020 = 2020;
const int year_2021 = 2021;
int Add_Years(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += year_2020;
	}
	return sum;
}
int main()
{
	int t; // Test cases
	cin >> t;
	int* arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < t; i++)
	{
		bool equal = 0;
		int count = arr[i] / 2020;
		if (count < 1)
			equal = 0;
		else
		{
			int sum = 0;
			sum = Add_Years(count);
			if (sum == arr[i])
			{
				equal = 1;
			}
			else
			{
				int iterations = count;
				for (int j = 0; j < iterations; j++)
				{
					sum = 0;
					sum = Add_Years(--count);
					for (int k = count; k < iterations; k++)
						sum += year_2021;
					if (sum == arr[i])
					{
						equal = 1;
						break;
					}
				}
			}
		}
		if (equal)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
