#include <iostream>
#include <algorithm>

using namespace std;

int ridbit(int*, int*, int, int, int);
int main()
{
	int test_cases;
	cin >> test_cases;
	int* arr = new int[test_cases];
	for (int i = 0; i < test_cases; i++)
	{
		cin >> arr[i];
	}
	int* size = new int[test_cases];
	for (int i = 0; i < test_cases; i++)
	{
		size[i] = 0;
		for (int j = 1; j < arr[i]; j++)
		{
			if (arr[i] % j == 0)
				size[i]++;
		}
	}
	int* divisors;
	for (int i = 0; i < test_cases; i++)
	{
		int n = size[i];
		int moves = 0;
		int index = 0;
		if (arr[i] == 1)
		{
			cout << moves << endl;
			continue;
		}
		divisors = new int[n];
		for (int j = 1; j < arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				divisors[index] = j;
				index++;
			}
		}
		moves = ridbit(arr, divisors, n, i, test_cases);
		cout << moves << endl;
		delete[] divisors;
	}
	delete[] arr;
	delete[] size;
}
int ridbit(int* arr, int* div, int size, int index, int test)
{
	int moves = 0;
	int n = arr[index];
	if (size == 1)
	{
		while (n != 1)
		{
			n -= 1;
			moves++;
		}
		return moves;
	}
	sort(div, div + size, greater<int>());
	n /= div[0];
	moves++;
	int id = 1;
	while (n != 1 && size > 1)
	{
		for (int i = id; i < size; i++)
		{
			if (div[i] > 1 && n % div[i] == 0)
			{
				n /= div[i];
				moves++;
				id++;
				break;
			}
		}
		if (n != 1)
		{
			n -= 1;
			moves++;
		}
	}
	return moves;
}